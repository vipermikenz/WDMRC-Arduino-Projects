#ifndef PanelController_h
#define PanelController_h

#include <Arduino.h>

// Class to handle reading from the control panel
class PanelController {
  private:
    int pinRead; // Analog pin used for reading panel input

  public:
    PanelController();
    int readPanel(); // Read the analog value from the control panel
};

#endif
