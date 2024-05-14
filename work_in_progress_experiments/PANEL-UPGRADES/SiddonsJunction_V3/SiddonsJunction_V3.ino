#include <Adafruit_NeoPixel.h>
#include <Wire.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "wifi_credentials.h"
#include "mqtt_settings.h"
#include "startup_settings.h"

#define NUM_PIXELS 6
#define PIXEL_PIN 6
#define LED_BRILLIANCE 10
#define PIXEL_FORMAT NEO_GRB + NEO_KHZ800

#define R LED_BRILLIANCE, 0, 0
#define G 0, LED_BRILLIANCE, 0
#define B 0, 0, LED_BRILLIANCE
#define Y LED_BRILLIANCE, LED_BRILLIANCE, 0
#define D 0, 0, 0

struct ButtonSetting {
  bool state;
  uint8_t colorIndex;
};

ButtonSetting buttonSettings[8] = {
  {false, 0}, // Button 1: Default OFF (Red)
  {false, 2}, // Button 2: Default OFF (Blue)
  {false, 2}, // Button 3: Default OFF (Blue)
  {false, 2}, // Button 4: Default OFF (Blue)
  {false, 2}, // Button 5: Default OFF (Blue)
  {false, 0}, // Button 6: Default OFF (Red)
  {false, 0}, // Button 7: Default OFF (Red)
  {false, 2}  // Button 8: Default OFF (Blue)
};

int buttonNumber = 0;

Adafruit_NeoPixel pixels(NUM_PIXELS, PIXEL_PIN, PIXEL_FORMAT);
WiFiClient espClient;
PubSubClient mqttClient(espClient);

const char* jsonTopic = "settings_topic"; // Topic to retrieve JSON settings
StaticJsonDocument<256> jsonDocument;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  pixels.begin();
  delay(1000);
  iniNeo();
  
  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  unsigned long startTime = millis();
  while (WiFi.status() != WL_CONNECTED && (millis() - startTime < 300000)) {
    delay(1000);
  }

  // Connect to MQTT broker
  mqttClient.setServer(mqttServer, mqttPort);
  startTime = millis();
  while (!mqttClient.connected() && (millis() - startTime < 300000)) {
    if (mqttClient.connect("ESP8266Client", mqttUsername, mqttPassword)) {
      Serial.println("Connected to MQTT");
    }
    delay(1000);
  }

  if (mqttClient.connected()) {
    bool receivedSettings = getJsonSettings();
    if (!receivedSettings) {
      loadDefaultSettings();
      Serial.println("Using predefined startup settings");
    }
  } else {
    loadDefaultSettings();
    Serial.println("MQTT connection failed. Using predefined startup settings");
  }
}

void loop() {
  panelRead();
  setUpData();
  pixels.show();
  sendData();
}

void iniNeo() {
  uint32_t colors[NUM_PIXELS] = {pixels.Color(R), pixels.Color(G), pixels.Color(D),
                                 pixels.Color(D), pixels.Color(G), pixels.Color(R)};
  for (int i = 0; i < NUM_PIXELS; i++) {
    pixels.setPixelColor(i, colors[i]);
  }
  pixels.show();
}

void panelRead() {
  int analogPin = A0;
  int buttonValue = 1100;

  while (buttonValue > 900) {
    buttonValue = analogRead(analogPin);
  }

  delay(10);
  buttonValue = analogRead(analogPin);
  buttonNumber = buttonValue / 100;

  while (analogRead(analogPin) < 900) {
    delay(100);
  }
}

void setUpData() {
  if (buttonNumber >= 0 && buttonNumber < 8) {
    buttonSettings[buttonNumber].state = !buttonSettings[buttonNumber].state;

    if (buttonSettings[buttonNumber].state) {
      for (int i = 0; i < 8; i++) {
        if (i != buttonNumber && buttonSettings[i].colorIndex == buttonSettings[buttonNumber].colorIndex) {
          buttonSettings[i].state = false;
        }
      }
    }

    for (int i = 0; i < NUM_PIXELS; i++) {
      if (buttonSettings[i].state) {
        switch (buttonSettings[i].colorIndex) {
          case 0: pixels.setPixelColor(i, pixels.Color(G)); break;
          case 2: pixels.setPixelColor(i, pixels.Color(B)); break;
        }
      } else {
        pixels.setPixelColor(i, pixels.Color(R));
      }
    }

    jsonDocument["buttonStates"][buttonNumber] = buttonSettings[buttonNumber].state;
  }
}

bool getJsonSettings() {
  Serial.println("Requesting JSON settings...");
  bool receivedSettings = false;
  bool jsonReceived = false; // New variable to track JSON reception

  if (mqttClient.subscribe(jsonTopic)) {
    unsigned long startTime = millis();
    while (!jsonReceived && (millis() - startTime < 5000)) {
      mqttClient.loop();
      if (mqttClient.connected()) {
        jsonReceived = true;
        Serial.println("JSON settings available");
      }
    }
  }

  if (jsonReceived) {
    DeserializationError error = deserializeJson(jsonDocument, mqttClient);
    if (!error) {
      for (int i = 0; i < 8; i++) {
        buttonSettings[i].state = jsonDocument["buttonStates"][i];
      }
      receivedSettings = true;
      Serial.println("Received JSON settings");
    } else {
      Serial.print("JSON parsing error: ");
      Serial.println(error.c_str());
    }
  }

  mqttClient.unsubscribe(jsonTopic);
  return receivedSettings;
}

String createJsonPayload() {
  StaticJsonDocument<128> jsonPayload;
  jsonPayload["button"] = buttonNumber;
  jsonPayload["state"] = buttonSettings[buttonNumber].state;
  
  String payload;
  serializeJson(jsonPayload, payload);
  return payload;
}

void sendData() {
  byte panelData = 0b11111111;

  for (int j = 0; j < 8; j++) {
    int a = buttonSettings[j].state;
    bitWrite(panelData, j, !a);
  }

  Wire.beginTransmission(0x20);
  Wire.write(panelData);
  Wire.endTransmission();
}
