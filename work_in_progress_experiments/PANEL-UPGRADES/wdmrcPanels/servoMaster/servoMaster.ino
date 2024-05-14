#include <Servo.h>
#include "CustomServoControl.h"

// Servo positions
int setPositions[NUM_SERVOS] = { 90, 105, 75, 75 };
int thrownPositions[NUM_SERVOS] = { 90, 90, 105, 105 };

// Create an array of servo objects
Servo servos[NUM_SERVOS];

// Servo state to keep track of positions
enum ServoState { SET, THROWN };
ServoState servoStates[NUM_SERVOS] = { SET, SET, SET, SET }; // Initialized to SET positions

void setup() {
  Serial.begin(9600);
  setupServos(servos);
  
  // Startup routine: Move to set positions and power off
  for (int i = 0; i < NUM_SERVOS; i++) {
    moveToPosition(servos[i], setPositions[i], SERVO_POWER_PINS[i]);
  }
}

void loop() {
  // Check the button states for each servo
  for (int i = 0; i < NUM_SERVOS; i++) {
    int buttonState = digitalRead(BUTTON_PINS[i]);

    if (buttonState == HIGH) {
      // Toggle servo state between SET and THROWN
      servoStates[i] = (servoStates[i] == SET) ? THROWN : SET;

      if (servoStates[i] == SET) {
        moveToPosition(servos[i], setPositions[i], SERVO_POWER_PINS[i]);
      } else {
        moveToPosition(servos[i], thrownPositions[i], SERVO_POWER_PINS[i]);
      }
    }
  }
}
