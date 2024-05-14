#ifndef CustomServoControl_h
#define CustomServoControl_h

#include <Arduino.h>
#include <Servo.h>

const int NUM_SERVOS = 4;
const int BUTTON_PINS[NUM_SERVOS] = { 14, 15, 16, 17 };
const int SERVO_POWER_PINS[NUM_SERVOS] = { 10, 11, 12, 13 };

const int SERVO_SPEED = 5;

void setupServos(Servo servos[]) {
  for (int i = 0; i < NUM_SERVOS; i++) {
    pinMode(BUTTON_PINS[i], INPUT);
    pinMode(SERVO_POWER_PINS[i], OUTPUT);
    digitalWrite(SERVO_POWER_PINS[i], LOW);
    servos[i].attach(6 + i);
  }
}

void moveServoSmoothly(Servo servo, int targetPosition) {
  int currentPosition = servo.read();
  int step = (targetPosition > currentPosition) ? 1 : -1;

  for (int pos = currentPosition; pos != targetPosition; pos += step) {
    servo.writeMicroseconds(map(pos, 0, 180, 1000, 2000));
    delay(SERVO_SPEED);
  }

  servo.writeMicroseconds(map(targetPosition, 0, 180, 1000, 2000));
}

void moveToPosition(Servo servo, int targetPosition, int powerPin) {
  digitalWrite(powerPin, HIGH);
  moveServoSmoothly(servo, targetPosition);
  delay(1000);
  digitalWrite(powerPin, LOW);
}

#endif
