 /* Composed by Gary Snow.
 For Western Districts Model Railway Club.*/
 
 
 
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
  #ifdef __AVR__
  #endif
  
 
  int pin  = 6; // neopixel pin  
  int numPixels   =  10; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.
  int buttonNumber = 9;

  Adafruit_NeoPixel *pixels; //neopixel object pointer.

  #define r 10,  0,  0 // red.
  #define g  0, 15,  0 //green.
  #define b  0,  0, 20 //blue.
  #define y 15, 15,  0 //yellow.
  #define d  0,  0,  0 //off.
 
  bool buttonSetting[8] = {0,0,0,0,0,0,0,0};
 
//=======================================================
  void setup() {
    
  Serial.begin(9600); 
  Wire.begin(); 
  // Then create a new NeoPixel object dynamically with these values:
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);

  pixels->begin(); // Initialize NeoPixel. 

  delay(1000);//allow system to stabilize.
 
  iniNeo();        // set neopixels to start position.
  }
     
     
   //==================================================================   
  void loop(){ 
  
   panelRead();  // wait for button press and update panelData,
    
   setUpData();  // update button settings.
    
   pixels->show();

   sendData();
   }   
  //==============================================================END

 
