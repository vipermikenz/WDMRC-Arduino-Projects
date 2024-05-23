/*Sketch for Quad booster using polyfuses

compiled by Gary Snow*/
  
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
 
  #ifdef __AVR__
  #endif  
 
  Adafruit_NeoPixel *pixels; //neopixel object pointer.

  int pin  = 6; // neopixel pin                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ; // neopixel brilliance.
  int numPixels   =  26; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.

  int buttonNumber = 6;
  int enableState[6] = {1,1,1,1,1,1};
  int polyPin[6] = {15,14,17,16,19,18};
  int enablePin[6] = {12,11,10,9,8,7};   
  int enableReset = 1;
  
  #define r 60, 0,  0 // red.
  #define g  0, 30, 0 //green.
  #define b  0, 0,100 //blue
  #define d  0, 0,  0 //off
  
//=======================================================
  void setup() {

  Serial.begin(9600); 
   Wire.begin();  
   
  pinMode(14, INPUT);// from polyfuses
  pinMode(15, INPUT);
  pinMode(16, INPUT);
  pinMode(17, INPUT); 
  pinMode(18, INPUT);
  pinMode(19, INPUT); 
  pinMode(21, INPUT);//reset enable state
  pinMode(3, INPUT);//track power

  pinMode( 7, OUTPUT);// H bridges enable
  pinMode( 8, OUTPUT);
  pinMode( 9, OUTPUT);
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT); 

 
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);
  pixels->begin(); // Initialize NeoPixel. 

  iniNeo();
 
  }
//========================================================
  void loop() {    

    readImputs(); // Check the imputs   
    
    setOutputs();

    pixels->show(); 
          
    
    //reEnable();
      } 
      

  //========================================================
  
  
