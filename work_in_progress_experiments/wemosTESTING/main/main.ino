#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#include "index_html.h"  //Our HTML webpage contents

//SSID and Password of your WiFi router
const char* ssid = "Gizmodo-hill-clan";
const char* password = "Cocoland01";
ESP8266WebServer server(80);  //Server on port 80

// Include the necessary library for PCA9685
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm;
const int SERVO_COUNT = 16;
const int SERVO_MIN_DEGREE = 0;
const int SERVO_MAX_DEGREE = 180;
const int SERVOMIN = 150;
const int SERVOMAX = 600;
// Define the delay between each servo step (in milliseconds)
const int SERVO_STEP_DELAY = 50;  // Adjust this value for the desired speed

int servoDegrees[SERVO_COUNT] = { 90 };

// Servo settings struct
struct ServoSettings {
  int maxLeft;
  int maxRight;
};

// Initialize the servo settings for each servo
ServoSettings servoSettings[SERVO_COUNT] = {
  { 70, 110 },
  { 74, 106 },
  { 78, 102 },
  { 82, 98 },
  { 86, 94 },
  { 90, 90 },
  { 94, 86 },
  { 98, 82 },
  { 102, 78 },
  { 106, 74 },
  { 110, 70 },
  { 114, 66 },
  { 118, 62 },
  { 122, 58 },
  { 126, 54 },
  { 130, 50 },
};

//============================
//     handleRoot function
//============================
void handleRoot() {
  String s = index_html;             //Read HTML contents
  server.send(200, "text/html", s);  //Send web page
}

//================================
//    handleSetServo function
//================================
void handleSetServo() {
  if (server.args() == 2) {
    int servoNum = server.arg(0).toInt();
    if (servoNum >= 1 && servoNum <= SERVO_COUNT) {
      int degree = server.arg(1).toInt();
      if (degree >= SERVO_MIN_DEGREE && degree <= SERVO_MAX_DEGREE) {
        setServo(servoNum, degree);
        server.send(200, "text/plain", "OK");
      } else {
        server.send(400, "text/plain", "Invalid degree value");
      }
    } else {
      server.send(400, "text/plain", "Invalid servo number");
    }
  } else {
    server.send(400, "text/plain", "Invalid request");
  }
}

// Function to set the servo position using PCA9685 library
void setServo(int servoNum, int degree) {
  int servoIndex = servoNum - 1;
  if (servoIndex >= 0 && servoIndex < SERVO_COUNT) {
    int currentDegree = servoDegrees[servoIndex];
    int pulse;

    if (degree != currentDegree) {
      // Determine the direction of movement (increment or decrement)
      int direction = (degree > currentDegree) ? 1 : -1;

      // Gradually move the servo in steps
      for (int i = currentDegree; i != degree; i += direction) {
        pulse = map(i, 0, 180, SERVOMIN, SERVOMAX);
        pwm.setPWM(servoIndex, 0, pulse);
        delay(SERVO_STEP_DELAY);
      }
    }

    servoDegrees[servoIndex] = degree;
    Serial.print("Set Servo ");
    Serial.print(servoNum);
    Serial.print(" to ");
    Serial.println(degree);
  }
}

// Function to reset all servos to 90 degrees
void resetAllServos() {
  for (int servoNum = 1; servoNum <= SERVO_COUNT; servoNum++) {
    setServo(servoNum, 90);
    delay(100);  // Add a small delay between setting each servo to avoid congestion
  }
}

//==============================
//           SETUP
//==============================
void setup(void) {
  Serial.begin(115200);
  while (!Serial) {
    // Wait for the serial port to connect
  }
  Serial.println("Serial communication initialized successfully");

  WiFi.begin(ssid, password);  //Connect to your WiFi router
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  //If connection successful show IP address in serial monitor
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());  //IP address assigned to your ESP

  pwm.begin();         // Initialize the PCA9685 with its I2C address (default is 0x40)
  pwm.setPWMFreq(50);  // Set the PCA9685 frequency to 50Hz for servos

  resetAllServos();  // Call the function to set all servos to 90 degrees

  server.on("/", handleRoot);              //Which routine to handle at root location
  server.on("/setServo", handleSetServo);  // Handle setting the servo position

  server.begin();  //Start server
  Serial.println("HTTP server started");
}


//==============================
//           LOOP
//==============================
void loop(void) {
  server.handleClient();  //Handle client requests
}
