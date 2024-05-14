// Main control file for Shipton Yard V2 using modular OOP approach
#include "NeoPixelControl.h"
#include "TrackManager.h"
#include "PanelController.h"
#include "DataTransmissionManager.h"

// Initialize control objects for various components of the system
NeoPixelControl neoControl(67, 6); // Control for NeoPixels on pin 6 with 67 pixels
TrackManager trackManager;         // Manager for track states
PanelController panelController;   // Controller for user panel input
DataTransmissionManager dataManager; // Manager for data transmission

void setup() {
  Serial.begin(9600);             // Start serial communication at 9600 baud rate
  neoControl.init();              // Initialize NeoPixels
  dataManager.sendData();         // Send initial data to set up the system
}

void loop() {
  panelController.readPanel();    // Read input from the control panel
  int trackStatus = trackManager.getTrackState(0); // Example: Get state of track 0

  // Handle track status changes based on panel input
  switch (trackStatus) {
    case 0: yard0(); break;       // Handle yard 0 settings
    case 1: yard1(); break;       // Handle yard 1 settings
    // Add additional cases for more yards
  }

  dataManager.sendData();         // Send updates to layout
  neoControl.update();            // Update NeoPixel display
}
