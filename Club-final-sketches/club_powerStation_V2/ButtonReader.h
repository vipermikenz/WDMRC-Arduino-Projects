#ifndef BUTTON_READER_H
#define BUTTON_READER_H

#include <Arduino.h>  // Include the main Arduino library for access to standard types and functions

// Define the ButtonReader class to handle reading button presses through an analog pin
class ButtonReader {
private:
    int analogPin;  // Pin number where the button is connected
    int threshold;  // Threshold value to determine a button press

public:
    // Constructor initializes the ButtonReader with a specific analog pin and threshold
    ButtonReader(int analogPin, int threshold = 900) : analogPin(analogPin), threshold(threshold) {}

    // Function to read the analog value from the button and interpret it as a button number
    int readButton() {
        int buttonValue = analogRead(analogPin);  // Read the current analog value from the pin
        return buttonValue / 100;  // Convert the analog value to a button number based on expected ranges
    }

    // Function to wait for a button press before continuing execution
    void waitForButtonPress() {
        int buttonValue = 0;  // Variable to hold the analog value read from the button
        do {
            buttonValue = analogRead(analogPin);  // Continuously read the analog value
            delay(10);  // Introduce a short delay to prevent excessive reading
        } while (buttonValue > threshold);  // Keep looping until the value drops below the threshold, indicating a button press
    }
};

#endif // BUTTON_READER_H
