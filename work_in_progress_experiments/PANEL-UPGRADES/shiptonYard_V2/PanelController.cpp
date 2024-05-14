#include "PanelController.h"

// Constructor: initializes reading on analog pin 0
PanelController::PanelController() {
  pinRead = 0; // Start reading from analog pin 0
}

// Read the analog pin and return the value
int PanelController::readPanel() {
  int buttonValue = analogRead(pinRead); // Perform analog read on the specified pin
  // Here I could add debouncing or other logic as needed
  return buttonValue;
}
