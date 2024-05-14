/*
  Project: Panel - SiddonsJunction
  Description: Paneil with buttons and neo picesl used to change turnouts and power tracks on and off.
  Author: Gary Snow, Michael HIll
  Date: 2023.08.04
  Version: V2.0

  Copyright 2023 Western Districts Model Railway Club

  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
  to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
  and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
  DEALINGS IN THE SOFTWARE.
*/


#include <Adafruit_NeoPixel.h>
#include <Wire.h>

// NeoPixel setup
#define NUM_PIXELS 6
#define PIXEL_PIN 6
#define LED_BRILLIANCE 10
#define PIXEL_FORMAT NEO_GRB + NEO_KHZ800

// NeoPixel colors
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

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  pixels.begin(); // Initialize NeoPixel.
  delay(1000);    // Allow system to stabilize.
  
  iniNeo();       // Set NeoPixels to start position.
}

void loop() {
  panelRead();    // Wait for button press and update panelData.
  setUpData();    // Update button settings.
  pixels.show();
  sendData();
}

void iniNeo() {
  // Set initial pixel colors
  uint32_t colors[NUM_PIXELS] = {pixels.Color(R), pixels.Color(G), pixels.Color(D),
                                 pixels.Color(D), pixels.Color(G), pixels.Color(R)};
  for (int i = 0; i < NUM_PIXELS; i++) {
    pixels.setPixelColor(i, colors[i]);
  }
  pixels.show(); // Send the initial pixel colors to the panel.
}

void panelRead() {
  int analogPin = A0;
  int buttonValue = 1100; // Set starting point

  while (buttonValue > 900) {
    // Wait for button press
    buttonValue = analogRead(analogPin);
  }

  delay(10);
  buttonValue = analogRead(analogPin); // Re-read analog value of pin.
  buttonNumber = buttonValue / 100;

  while (analogRead(analogPin) < 900) {
    // Check for button release
    delay(100);
  }
}

void setUpData() {
  if (buttonNumber >= 0 && buttonNumber < 8) {
    buttonSettings[buttonNumber].state = !buttonSettings[buttonNumber].state;

    // Turn off other buttons in the same color group
    if (buttonSettings[buttonNumber].state) {
      for (int i = 0; i < 8; i++) {
        if (i != buttonNumber && buttonSettings[i].colorIndex == buttonSettings[buttonNumber].colorIndex) {
          buttonSettings[i].state = false;
        }
      }
    }

    // Update NeoPixel colors
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
  }
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

