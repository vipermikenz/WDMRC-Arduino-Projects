 
 
 
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
 // #include "printf.h"
  #ifdef __AVR__
  #endif
  const byte interruptPin = 2;
  const byte restartPin = 4;
  bool analogInPin = 0;
  int pin  = 6; // neopixel pin
  int numPixels   =  63; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.  
  
  Adafruit_NeoPixel *pixels; //neopixel object pointer.

  #define r 15,  0,  0 // red.
  #define g  0, 15,  0 //green.
  #define b  0,  0, 15 //blue.
  #define y 10, 15,  0 //yellow.
  #define d  0,  0,  0 //off.
  
  int track[2] = { 10, 10};
  int mainLine[9] = {9,9,9,9,9,9,9,9,9};
  int yardLed[9] = {0,1,2,3,4,60,61,63,59};
 // int m = 0;

  bool m = 0;
  bool pinRead = 0;
  bool pointLeft1[8] = {0,0,0,0,0,0,0,0};
  bool pointLeft2[8] = {0,0,0,0,0,0,0,0};
  bool pointRight1[8] = {0,0,0,0,0,0,0,0};
  bool pointRight2[8] = {0,0,0,0,0,0,0,0};
  bool interlockLeft[8] = {0,0,0,0,0,0,0,0};
  bool interlockRight[8] = {0,0,0,0,0,0,0,0};
  bool yardLeft[8] = {0,0,0,0,0,0,0,0};
  bool yardRight[8] = {0,0,0,0,0,0,0,0}; 
 
     //===============================================================
void setup() {

  Serial.begin(9600);
  Wire.begin();    
  
  // Then create a new NeoPixel object dynamically with these values:
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);

  pixels->begin(); // Initialize NeoPixel.
  iniNeo();        // set neopixels to start position.
  pinMode(interruptPin, INPUT_PULLUP);
  pinMode(restartPin,OUTPUT);
  attachInterrupt(0,timeOut,LOW);

  pixels->show();
  }
     
   //==================================================================   
  void loop(){ 
  
   panelRead();  // wait for button press and update panelData,

   switch (track[0]) {

      case 0:
      yardTrack0();
      break;

      case 1:
     yardTrack1();
      break;
      
      case 2:
      yardTrack2();
      break;
      
      case 3:
      yardTrack3();
      break;
      
      case 4:
      yardTrack4();
      break;
      
      case 5:
      yardTrack5();
      break; 

      case 9:
      nine();
      
      break;    
   }

  // sendData();
   
   pixels->show();
   
   }   
//================================================================== 

      
  
     
