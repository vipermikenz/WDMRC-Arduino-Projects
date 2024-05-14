 
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
  #ifdef __AVR__
  #endif 
    
  int pin  = 6; // neopixel pin
  int numPixels   =  67; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.  
  Adafruit_NeoPixel *pixels; //neopixel object pointer.
  
  #define r 10,  0,  0 // red.
  #define g  0, 10,  0 //green.
  #define b  0,  0, 10 //blue.
  #define y 10, 10,  0 //yellow.
  #define d  0,  0,  0 //off.
  
  int track[3] = { 10, 10, 10};
  int mainLine[9] = {9,9,9,9,9,9,9,9,9};// main line yard connections.
  int yardRoad[6] = {9,9,9,9,9,9};// yard main line connections.
  int routeAlt[4] = {4,4,4.4}; //alt points setup.

  bool pointLeft1[8] = {0,0,0,0,0,0,0,0}; //left points.
  bool pointLeft2[8] = {0,0,0,0,0,0,0,0};
  bool pointRight1[8] = {0,0,0,0,0,0,0,0};//right points.
  bool pointRight2[8] = {0,0,0,0,0,0,0,0};  
  bool pointRoute[8] = {0,0,0,0,0,0,0,0};
  
  bool yardloops[8] = {0,0,0,0,0,0,0,0}; //right track power feed

 
  
 
     //===============================================================
void setup() {

 Serial.begin(9600);
  Wire.begin();    
  
  // Then create a new NeoPixel object dynamically with these values:
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);
  
  pixels->begin(); // Initialize NeoPixel.
  
  iniNeo();     // Set neopixels to start position.
  
  sendData();      // Initilize layout.
  
  pixels->show();  // Initialize panel display.*/
  }
     
   //==================================================================   
  void loop(){ 
  
 panelRead();  // wait for button press and update panelData,  
 
 switch (track[0]) { //Update track data.

      case 0:
     yard0();
      break;

      case 1:
     yard1();
      break;
      
      case 2:
      yard2();
      break;
      
      case 3:
      yard3();
      break;
      
      case 4:
      yard4();
      break;
      
      case 5:
      yard5();
      break; 

      case 6:
      yard6();
      break;
      
      case 7:
      yard7();
      break; 
      yard4();
      break;

      case 9://deselect.
      nine();
      break

      case 11:
      pointsYard(); 
      
      break;    
     }    
      
   sendData();
   
   pixels->show();
     }
    }   
//==============================================================END 
