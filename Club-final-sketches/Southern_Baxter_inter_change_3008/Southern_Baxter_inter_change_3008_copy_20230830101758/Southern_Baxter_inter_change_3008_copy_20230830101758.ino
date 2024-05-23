/**
* authour:WDMRC
*/
 
 
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
  #ifdef __AVR__
  #endif 
    
  int pin  = 6; // neopixel pin
  int numPixels   =  63; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.  
  Adafruit_NeoPixel *pixels; //neopixel object pointer.
  #define r 20,  0,  0 // red.
  #define g  0, 15,  0 //green.
  #define b  0,  0, 15 //blue.
  #define y 15, 25,  0 //yellow.
  #define d  0,  0,  0 //off.
  
  int track[2] = { 10, 10};
  int mainLine[9] = {9,9,9,9,9,9,9,9,9};// main line yard connections.
  int yardRoad[6] = {9,9,9,9,9,9};// yard main line connections.
  bool pinRead = A0;// Anolog pins A0 & A1
  bool pointLeft1[8] = {0,0,0,0,0,0,0,0}; //left points.
  bool pointLeft2[8] = {0,0,0,0,0,0,0,0};
  bool pointRight1[8] = {0,0,0,0,0,0,0,0};//right points.
  bool pointRight2[8] = {0,0,0,0,0,0,0,0};
  bool interlockLeft[8] = {0,0,0,0,0,0,0,0};//left track power feeds.
  bool interlockRight[8] = {0,0,0,0,0,0,0,0};//right track power feeds.
  bool yardLeft[8] = {0,0,0,0,0,0,0,0};//left track power feed
  bool yardRight[8] = {0,0,0,0,0,0,0,0}; //right track power feed

  byte pointL1 = 0b11111111;
  byte pointL2 = 0b11111111;
  byte pointR1 = 0b11111111;
  byte pointR2 = 0b11111111;

  byte trackL = 0b11111111;
  byte trackR = 0b11111111;
  
  byte powerL = 0b11111111;
  byte powerR = 0b11111111;
 
     //===============================================================
void setup() {

  Serial.begin(9600);
  Wire.begin();    
  
  // Then create a new NeoPixel object dynamically with these values:
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);
  
  pixels->begin(); // Initialize NeoPixel.
  
  iniNeo();        // Set neopixels to start position.
  
  sendData();      // Initilize layout.
  
  pixels->show();  // Initialize panel display.
  }
     
   //==================================================================   
  void loop(){ 
  
  panelRead();  // wait for button press and update panelData,

      // Update track data.
  
   
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

      case 9://deselect.
      nine();
      
      break;    
     }      
      {
   sendData();
   
   pixels->show();
     }
    }   
//==============================================================END 

      
  
     
