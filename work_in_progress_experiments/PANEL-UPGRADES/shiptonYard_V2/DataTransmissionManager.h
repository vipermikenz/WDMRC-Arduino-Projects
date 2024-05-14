#ifndef DataTransmissionManager_h
#define DataTransmissionManager_h

#include <Wire.h>

// Class to manage data transmission to layout components
class DataTransmissionManager {
public:
  DataTransmissionManager();
  void sendData(); // Method to send data via I2C
  void sendDataL(); // Send data specifically to left track components
  void sendDataR(); // Send data specifically to right track components
private:
  byte calculateByte(bool points[8]); // Utility to calculate a byte from an array of bools for transmission
};

#endif
