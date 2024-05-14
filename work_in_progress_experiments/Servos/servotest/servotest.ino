#include <Servo.h>

Servo myServo;
int servoPin = 9; // Change this to the pin connected to the servo

void setup() {
  myServo.attach(servoPin);
  myServo.write(90); // Move the servo to the 90-degree position
}

void loop() {
  myServo.write(0); // Move the servo to 0-degree position (fully left)
  delay(1000);
  myServo.write(180); // Move the servo to 180-degree position (fully right)
  delay(1000);
}