#include <Wire.h>  // Include Wire library for I2C communication
#include <SPI.h>   // Include SPI library for SPI communication
#include "NeoPixelController.h"  // Include custom class for NeoPixel control
#include "ButtonReader.h"  // Include custom class for button reading

// Define constants for NeoPixel setup
#define NUM_PIXELS 9  // Number of NeoPixels in the strip
#define PIN 6  // Pin number to which the NeoPixel strip is connected
#define PIXEL_FORMAT NEO_GRB + NEO_KHZ800  // NeoPixel color format and frequency
#define BRIGHTNESS 10  // Brightness level for the NeoPixels

// Create objects for controlling NeoPixels and reading button input
NeoPixelController pixelController(NUM_PIXELS, PIN, PIXEL_FORMAT, BRIGHTNESS);
ButtonReader buttonReader(A0);
// Array to keep track of button states

// Setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);  // Start serial communication at 9600 baud
    Wire.begin();  // Initialize I2C communication
    initializeNeoPixels();  // Call function to initialize all NeoPixels to a known state
    pixelController.show();  // Update the NeoPixels with the initial state
}

// Function to initialize all NeoPixels to a known state (e.g., all off)
void initializeNeoPixels() {
    for (int i = 0; i < NUM_PIXELS; i++) {
        pixelController.setPixelColor(i, pixelController.Color(0, 0, 0));  // Set each pixel to off
    }
}

// Loop function runs over and over again forever
void loop() {
    buttonReader.waitForButtonPress();  // Block until a button press is detected
    int buttonNumber = buttonReader.readButton();  // Read the button number that was pressed
    updateButtonSettings(buttonNumber);  // Update the NeoPixels based on the button pressed
    pixelController.show();  // Refresh the NeoPixels to show the updated colors
    sendData();  // Send data over I2C to other devices if needed
}

// Function to update the LED settings based on button input
void updateButtonSettings(int buttonNumber) {
    switch (buttonNumber) {
        case 0:
            buttonSetting[0] = !buttonSetting[0];
            if (buttonSetting[0]) {
                buttonSetting[1] = 1;
                pixelController.setPixelColor(0, pixelController.Color(255, 0, 0)); // Red
                pixelController.setPixelColor(1, pixelController.Color(0, 255, 0)); // Green
                pixelController.setPixelColor(2, pixelController.Color(255, 0, 0)); // Red
            } else {
                buttonSetting[1] = 0;
                pixelController.setPixelColor(0, pixelController.Color(0, 255, 0)); // Green
                pixelController.setPixelColor(1, pixelController.Color(255, 0, 0)); // Red
                pixelController.setPixelColor(2, pixelController.Color(0, 255, 0)); // Green
            }
            break;
        case 1:
            buttonSetting[2] = !buttonSetting[2];
            if (buttonSetting[2]) {
                pixelController.setPixelColor(3, pixelController.Color(255, 0, 0)); // Red
                pixelController.setPixelColor(4, pixelController.Color(0, 255, 0)); // Green
            } else {
                pixelController.setPixelColor(3, pixelController.Color(0, 255, 0)); // Green
                pixelController.setPixelColor(4, pixelController.Color(255, 0, 0)); // Red
            }
            break;
        case 2:
            buttonSetting[4] = !buttonSetting[4];
            buttonSetting[5] = 0;
            if (buttonSetting[4]) {
                pixelController.setPixelColor(5, pixelController.Color(0, 0, 255)); // Blue
            } else {
                pixelController.setPixelColor(5, pixelController.Color(0, 0, 0)); // Off
            }
            break;
        case 3:
            buttonSetting[5] = !buttonSetting[5];
            buttonSetting[4] = 0;
            if (buttonSetting[5]) {
                pixelController.setPixelColor(5, pixelController.Color(255, 255, 0)); // Yellow
            } else {
                pixelController.setPixelColor(5, pixelController.Color(0, 0, 0)); // Off
            }
            break;
        case 4:
            buttonSetting[6] = !buttonSetting[6];
            buttonSetting[7] = 0;
            if (buttonSetting[6]) {
                pixelController.setPixelColor(6, pixelController.Color(0, 0, 255)); // Blue
            } else {
                pixelController.setPixelColor(6, pixelController.Color(0, 0, 0)); // Off
            }
            break;
        case 5:
            buttonSetting[7] = !buttonSetting[7];
            buttonSetting[6] = 0;
            if (buttonSetting[7]) {
                pixelController.setPixelColor(6, pixelController.Color(255, 255, 0)); // Yellow
            } else {
                pixelController.setPixelColor(6, pixelController.Color(0, 0, 0)); // Off
            }
            break;
        case 6:
            buttonSetting[3] = !buttonSetting[3];
            if (buttonSetting[3]) {
                pixelController.setPixelColor(7, pixelController.Color(255, 0, 0)); // Red
                pixelController.setPixelColor(8, pixelController.Color(0, 255, 0)); // Green
            } else {
                pixelController.setPixelColor(7, pixelController.Color(0, 255, 0)); // Green
                pixelController.setPixelColor(8, pixelController.Color(255, 0, 0)); // Red
            }
            break;
    }
    pixelController.show(); // Update LEDs immediately after setting the colors
}


// Function to send data over I2C to other devices
void sendData() {
    byte panelData = 0b11111111;  // Prepare data byte to send
    for (int j = 0; j < 8; j++) {
        bitWrite(panelData, j, !buttonSetting[j]);  // Write each button state as a bit in the byte
    }
    Wire.beginTransmission(0x38);  // Start I2C transmission to device at address 0x38
    Wire.write(panelData);  // Send the byte
    Wire.endTransmission();  // End transmission
}
