#include "DataTransmissionManager.h"

// Constructor: initializes the Wire library
DataTransmissionManager::DataTransmissionManager() {
  Wire.begin(); // Start I2C communication
}

// Send data to all components via I2C
void DataTransmissionManager::sendData() {
  // Example: send some data to an I2C device with address 0x20
  Wire.beginTransmission(0x20);
  Wire.write(0x00); // Just a sample byte till i add the correct one ******************
  Wire.endTransmission();
}

// Calculate a byte from an array of boolean values representing digital outputs
byte DataTransmissionManager::calculateByte(bool points[8]) {
  byte result = 0;
  for (int i = 0; i < 8; i++) {
    bitWrite(result, i, !points[i]); // Invert the boolean and set the corresponding bit in the byte
  }
  return result;
}

// Send data specifically to devices managing left track points
void DataTransmissionManager::sendDataL() {
  // Send calculated byte to a specific device for left tracks
  byte data = calculateByte(/* hypothetical boolean array */);
  Wire.beginTransmission(0x21); // Sample device address need to work this out ********************
  Wire.write(data);
  Wire.endTransmission();
}

// Send data specifically to devices managing right track points
void DataTransmissionManager::sendDataR() {
  // Send calculated byte to a specific device for right tracks
  byte data = calculateByte(/* hypothetical boolean array */);
  Wire.beginTransmission(0x22); // Sample device address need to work this out ********************
  Wire.write(data);
  Wire.endTransmission();
}
