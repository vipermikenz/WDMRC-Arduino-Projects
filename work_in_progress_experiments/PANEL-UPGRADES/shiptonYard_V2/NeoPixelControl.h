#ifndef NeoPixelControl_h
#define NeoPixelControl_h

#include <Adafruit_NeoPixel.h>

// Class to control NeoPixel LEDs
class NeoPixelControl {
  private:
    Adafruit_NeoPixel* pixels; // Pointer to NeoPixel strip
    uint16_t numPixels;        // Number of pixels in the strip
    uint8_t pin;               // Pin number connected to the NeoPixel strip

  public:
    NeoPixelControl(uint16_t numPixels, uint8_t pin);
    void init();               // Initialize the NeoPixel strip
    void setPixelColor(int index, uint32_t color); // Set color of a single pixel
    void update();             // Update the strip to show changes
};

#endif
