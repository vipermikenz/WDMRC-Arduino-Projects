/** Composed by Gary Snow
*   Updated by Mike Hill
*   For Western Districts Model Railway Club.
*
*/

#include <Adafruit_NeoPixel.h>
#include <Wire.h>  
#include <SPI.h>
#include "printf.h"

Adafruit_NeoPixel *pixels; // NeoPixel object pointer.

const int pin = 6; // NeoPixel pin
const int ledBril = 10; // NeoPixel brightness.
const int numPixels = 6; // Number of pixels.
const int pixelFormat = NEO_GRB + NEO_KHZ800; // NeoPixel color format & data rate.
const int analogPin = A0; // Analog pin for button input

int buttonNumber = 9; // Initialize button number
int pointNumber = 0; // Initialize point number

bool buttonSetting[8] = {0,0,0,0,0,0,0,0}; // Button state array

// Color definitions in camel case
#define redColor ledBril, 0, 0
#define greenColor 0, ledBril, 0
#define blueColor 0, 0, ledBril
#define yellowColor ledBril, ledBril, 0
#define offColor 0, 0, 0

void setup() {
  Serial.begin(9600); 
  Wire.begin();  

  // Create a new NeoPixel object dynamically with the specified values
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);
  pixels->begin(); // Initialize NeoPixel
  
  delay(1000); // Allow system to stabilize
  iniNeo(); // Set NeoPixels to start position
}

void loop() { 
  panelRead(); // Wait for button press and update panel data
  setUpData(); // Update button settings
  pixels->show(); // Update the NeoPixel display
  sendData(); // Send data to the I2C device
}

void iniNeo() { 
  // Set initial colors for NeoPixels
  pixels->setPixelColor(0, pixels->Color(redColor));
  pixels->setPixelColor(1, pixels->Color(greenColor));
  pixels->setPixelColor(2, pixels->Color(offColor));
  pixels->setPixelColor(3, pixels->Color(offColor));
  pixels->setPixelColor(4, pixels->Color(greenColor));
  pixels->setPixelColor(5, pixels->Color(redColor));

  pixels->show(); // Send the initial pixel colors to the panel
}

void panelRead() {   
  int buttonValue = 1100; // Set starting point    

  while (buttonValue > 900) { // Wait for button press 
    buttonValue = analogRead(analogPin); // Read value of analog pin      
  }
  
  delay(10);    
  buttonValue = analogRead(analogPin); // Reread analog value of pin
  buttonNumber = buttonValue / 100; // Determine button number
  
  while (analogRead(analogPin) < 900) { // Check for button release
    delay(100);
  } 
}

void setUpData() {
  switch (buttonNumber) {
    case 0:
      buttonSetting[0] = !buttonSetting[0];
      if (!buttonSetting[0]) {
        pixels->setPixelColor(0, pixels->Color(redColor));
        pixels->setPixelColor(1, pixels->Color(greenColor));
      } else {
        pixels->setPixelColor(0, pixels->Color(greenColor));
        pixels->setPixelColor(1, pixels->Color(redColor));
      }
      break;

    case 1: 
      buttonSetting[1] = !buttonSetting[1];
      if (!buttonSetting[1]) {
        pixels->setPixelColor(2, pixels->Color(offColor));
      } else {  
        buttonSetting[2] = 0;
        pixels->setPixelColor(2, pixels->Color(blueColor));
      }
      break;

    case 2: 
      buttonSetting[2] = !buttonSetting[2];
      if (!buttonSetting[2]) {
        pixels->setPixelColor(2, pixels->Color(offColor));
      } else {  
        buttonSetting[1] = 0;
        pixels->setPixelColor(2, pixels->Color(yellowColor));
      }
      break;

    case 3: 
      buttonSetting[3] = !buttonSetting[3];
      if (!buttonSetting[3]) {
        pixels->setPixelColor(3, pixels->Color(offColor));
      } else {  
        buttonSetting[4] = 0;
        pixels->setPixelColor(3, pixels->Color(blueColor));
      }
      break;

    case 4: 
      buttonSetting[4] = !buttonSetting[4];
      if (!buttonSetting[4]) {
        pixels->setPixelColor(3, pixels->Color(offColor));
      } else {  
        buttonSetting[3] = 0;
        pixels->setPixelColor(3, pixels->Color(yellowColor));
      }
      break;

    case 5:
      buttonSetting[5] = !buttonSetting[5];
      if (!buttonSetting[5]) {
        pixels->setPixelColor(4, pixels->Color(greenColor));
        pixels->setPixelColor(5, pixels->Color(redColor));
      } else {
        pixels->setPixelColor(4, pixels->Color(redColor));
        pixels->setPixelColor(5, pixels->Color(greenColor));
      }
      break;
  }
}

void sendData() {   
  byte panelData = 0b11111111;
  
  for (int j = 0; j < 8; j++) { // Convert bool to binary and invert
    bitWrite(panelData, j, !buttonSetting[j]); 
  }
  
  Wire.beginTransmission(0x20); // Start I2C transmission   
  Wire.write(panelData); // Send the panel data
  Wire.endTransmission(); // End I2C transmission                   
}
