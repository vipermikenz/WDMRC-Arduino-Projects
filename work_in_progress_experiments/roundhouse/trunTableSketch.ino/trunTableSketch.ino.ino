#include <Adafruit_NeoPixel.h>
#include <Wire.h>

const int BUTTON_PIN = A0;
const int NEOPIXEL_PIN = 6;
const int NUM_PIXELS = 16;
const int DEFAULT_BRILLIANCE = 127; // Default brilliance value

Adafruit_NeoPixel pixels(NUM_PIXELS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

#define OFF_COLOR pixels.Color(255, 0, 0)
#define ON_COLOR(b) pixels.Color(0, b, 0) // Adjusted for brilliance
#define OFF_BRILLIANCE 0
#define MAX_BRILLIANCE 255

class NeoPixelController {
public:
  NeoPixelController() {}

  void initialize() {
    pixels.begin();
    setAllPixelsToRed();
    pixels.show();
    setBrilliance(DEFAULT_BRILLIANCE); // Set default brilliance
  }

  void setPixelColor(int pixel, uint32_t color) {
    pixels.setPixelColor(pixel, color);
  }

  void setBrilliance(uint8_t brilliance) {
    pixels.setBrightness(brilliance);
  }

private:
  void setAllPixelsToRed() {
    for (int i = 0; i < NUM_PIXELS; i++) {
      pixels.setPixelColor(i, OFF_COLOR);
    }
  }
};

class ButtonHandler {
public:
  ButtonHandler(int pin) : analogPin(pin) {}

  void setup() {
    pinMode(analogPin, INPUT);
  }

  int readButtonNumber() {
    int analogValue = analogRead(analogPin);
    return (analogValue <= 900) ? analogValue / 100 : -1;
  }

private:
  int analogPin;
};

class DataTransmitter {
public:
  DataTransmitter() {}

  void sendData(byte panelData) {
    Wire.beginTransmission(0x38);
    Wire.write(panelData);
    Wire.endTransmission();
  }
};

NeoPixelController neoPixelController;
ButtonHandler buttonHandler(BUTTON_PIN);
DataTransmitter dataTransmitter;

bool trackStates[NUM_PIXELS] = {false};

void setup() {
  Serial.begin(9600);
  Wire.begin();
  neoPixelController.initialize();
  buttonHandler.setup();
}

void loop() {
  int buttonNumber = buttonHandler.readButtonNumber();
  if (buttonNumber != -1) {
    toggleTrackState(buttonNumber);
    neoPixelController.setPixelColor(buttonNumber, trackStates[buttonNumber] ? ON_COLOR(MAX_BRILLIANCE) : OFF_COLOR);
    pixels.show(); // Update NeoPixels only when necessary
    sendData();
  }
  // No delay for faster performance
}

void toggleTrackState(int buttonIndex) {
  trackStates[buttonIndex] = !trackStates[buttonIndex];
}

void sendData() {
  byte panelData = 0;

  for (int i = 0; i < NUM_PIXELS; i++) {
    bitWrite(panelData, i, trackStates[i] ? 1 : 0);
  }

  dataTransmitter.sendData(panelData);
}
