#include "NeoPixelControl.h"

// Constructor for NeoPixelControl
NeoPixelControl::NeoPixelControl(uint16_t numPixels, uint8_t pin) : numPixels(numPixels), pin(pin) {
  pixels = new Adafruit_NeoPixel(numPixels, pin, NEO_GRB + NEO_KHZ800);
}

// Initialize the NeoPixels
void NeoPixelControl::init() {
  pixels->begin();
  pixels->show(); // Ensure all pixels are off initially
}

// Set the color of an individual pixel
void NeoPixelControl::setPixelColor(int index, uint32_t color) {
  pixels->setPixelColor(index, color);
}

// Update the NeoPixel strip to reflect any changes
void NeoPixelControl::update() {
  pixels->show();
}
