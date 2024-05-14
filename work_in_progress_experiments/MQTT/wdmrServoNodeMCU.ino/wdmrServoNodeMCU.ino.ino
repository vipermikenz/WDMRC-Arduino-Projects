#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Servo.h>
#include <EEPROM.h>

// WiFi Credentials
const char* ssid[] = {"wdmrc", "Gizmodo-hill-clan"};
const char* password[] = {"wdmrcbnsf", "Cocoland01"};
const int numWiFiNetworks = 2;

ESP8266WebServer server(80);

Servo servos[4];

int straightPositions[4] = {70, 70, 70, 70};
int switched = 120;

void setup() {
  Serial.begin(9600);

  bool connected = false;
  for (int i = 0; i < numWiFiNetworks; ++i) {
    Serial.print("Connecting to WiFi network: ");
    Serial.println(ssid[i]);
    WiFi.begin(ssid[i], password[i]);
    int attempts = 0;
    while (WiFi.status() != WL_CONNECTED && attempts < 30) { // Try for maximum 30 seconds
      delay(1000);
      Serial.print(".");
      attempts++;
    }
    if (WiFi.status() == WL_CONNECTED) {
      connected = true;
      break;
    }
    Serial.println("WiFi connection failed");
    WiFi.disconnect();
    delay(1000);
  }

  if (!connected) {
    Serial.println("Failed to connect to any WiFi network. Exiting.");
    return;
  }

  Serial.println("");
  Serial.print("Connected to WiFi. IP address: ");
  Serial.println(WiFi.localIP());

  for (int i = 0; i < 4; i++) {
    servos[i].attach(i + 2);
  }

  server.on("/", HTTP_GET, handleRoot);
  server.on("/move", HTTP_GET, handleMove);
  server.on("/save", HTTP_GET, handleSave);
  server.on("/setStraight", HTTP_GET, handleSetStraight);
  server.begin();

  EEPROM.begin(512);
  for (int i = 0; i < 4; i++) {
    straightPositions[i] = EEPROM.read(i);
  }
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi disconnected. Reconnecting...");
    setup(); // Attempt to reconnect
  }
  server.handleClient();
}

void handleRoot() {
  String html = "<html><body>"
                "<h1>Servo Control</h1>";

  for (int i = 0; i < 4; i++) {
    html += "<p>Servo " + String(i + 1) + "</p>"
            "<input type='number' id='straight" + String(i) + "' value='" + String(straightPositions[i]) + "'>"
            "<button onclick=\"location.href='/setStraight?servo=" + String(i) + "&pos=' + document.getElementById('straight" + String(i) + "').value\">Set Straight Position</button>"
            "<button onclick=\"location.href='/move?servo=" + String(i) + "&pos=straight'\">Move to Straight</button>"
            "<button onclick=\"location.href='/move?servo=" + String(i) + "&pos=switched'\">Move to Switched</button>";
  }

  html += "<p><button onclick=\"location.href='/save'\">Save Positions</button></p>"
          "</body></html>";
  server.send(200, "text/html", html);
}

void handleMove() {
  int servoIndex = server.arg("servo").toInt();
  String position = server.arg("pos");
  if (position == "straight") {
    servos[servoIndex].write(straightPositions[servoIndex]);
  } else if (position == "switched") {
    servos[servoIndex].write(switched);
  }
  server.send(200, "text/plain", "Moving Servo");
}

void handleSetStraight() {
  int servoIndex = server.arg("servo").toInt();
  int position = server.arg("pos").toInt();
  straightPositions[servoIndex] = position;
  server.send(200, "text/plain", "Straight Position Set");
}

void handleSave() {
  for (int i = 0; i < 4; i++) {
    EEPROM.write(i, straightPositions[i]);
  }
  EEPROM.commit();
  server.send(200, "text/plain", "Settings Saved");
}
