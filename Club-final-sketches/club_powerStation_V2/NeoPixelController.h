#ifndef NEO_PIXEL_CONTROLLER_H
#define NEO_PIXEL_CONTROLLER_H

#include <Adafruit_NeoPixel.h>  // Include library for controlling Adafruit NeoPixel strips

// Define the NeoPixelController class to manage operations on a NeoPixel LED strip
class NeoPixelController {
private:
    Adafruit_NeoPixel *pixels;  // Pointer to an Adafruit_NeoPixel object that represents the LED strip
    int numPixels;  // Number of pixels in the NeoPixel strip
    int pin;  // Pin number that the NeoPixel strip is connected to
    uint32_t pixelFormat;  // Format of the pixel color data (e.g., RGB, GRB)
    int brightness;  // Brightness level for the NeoPixel strip

public:
    // Constructor: Initializes the NeoPixel strip
    NeoPixelController(int numPixels, int pin, uint32_t pixelFormat, int brightness)
    : numPixels(numPixels), pin(pin), pixelFormat(pixelFormat), brightness(brightness) {
        pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);  // Create a new NeoPixel object
        pixels->begin();  // Initialize the NeoPixel strip
        pixels->setBrightness(brightness);  // Set the brightness of the strip
    }

    // Function to set the color of a specific pixel
    void setPixelColor(int pixel, uint32_t color) {
        pixels->setPixelColor(pixel, color);  // Set the color of the pixel at the specified index
    }

    // Function to create a color from individual Red, Green, and Blue components
    uint32_t Color(uint8_t r, uint8_t g, uint8_t b) {
        return pixels->Color(r, g, b);  // Use Adafruit's method to create a packed color value from RGB components
    }

    // Function to update the NeoPixel strip to show any changes made to the pixels
    void show() {
        pixels->show();  // Send the updated color data to the strip
    }

    // Destructor: Cleans up the NeoPixel object when the controller object is destroyed
    ~NeoPixelController() {
        delete pixels;  // Properly deallocate memory used by the Adafruit_NeoPixel object
    }
};

#endif // NEO_PIXEL_CONTROLLER_H
