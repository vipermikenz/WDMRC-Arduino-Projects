// Composed by Gary Snow.
// For Western Districts Model Railway Club.
 
 
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
/*Global variables use 522 bytes (25%) of dynamic memory, leaving 1526 bytes for local variables. Maximum is 2048 bytes.Sketch uses 21492 bytes (69%) of program storage space. Maximum is 30720 bytes.
￼
Ln 148, Col 1
Arduino Nano
on /dev/ttyUSB0 [not connected]
1*/

 // #include "printf.h"
  #ifdef __AVR__
  #endif
  
  Adafruit_NeoPixel *pixels; //neopixel object pointer.
 
  int pin  = 6; // neopixel pin
  int ledBril = 10; // neopixel brilliance.
  int numPixels   =  6; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.
  int buttonNumber = 9;
 
 

  
  #define r ledBril,  0,  0 // red.
  #define g 0, ledBril,  0 //green.
  #define b  0,  0, ledBril //blue.
  #define y ledBril, ledBril,  0 //yellow.
  #define d  0,  0,  0 //off.
 
  
  int pointNumber = 0;

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

  sendData();
  }
        
//==================================================================   
  void loop(){ 
  
   panelRead();  // wait for button press and update panelData,
    
   interlockLeft[6] = 0;
   interlockLeft[1] = 0;
   setUpData();  // update button settings.
    
   pixels->show();

   sendData();++
   }   
   
//================================================================== 

  void iniNeo(){ 
  
   pixels->setPixelColor(0, pixels->Color(r));
   pixels->setPixelColor(1, pixels->Color(g));
   pixels->setPixelColor(2, pixels->Color(d));
   pixels->setPixelColor(3, pixels->Color(d));
   pixels->setPixelColor(4, pixels->Color(g));   
   pixels->setPixelColor(5, pixels->Color(r));
   
  
   pixels->show();   // Send the initial pixel colors to the panel.
    
  }
  //==================================================================
  void panelRead(){   
 
    int analogPin = A0;
    int buttonValue = 1100;                // set starting point    
  
    while (buttonValue > 900) {            // wait for button press 
    
    buttonValue = analogRead(analogPin); // read  value of analog pin      
    }
    {
    delay (10);    
    buttonValue = analogRead(analogPin);  // reread analog value of pin .  
    buttonNumber = (buttonValue/100); 
   
   interlockLeft[6] = 0;
   interlockLeft[1] = 0;
    
    }
    while (analogRead(analogPin) < 900) {//check for button release
    delay (100);
     } 
    } 
        //=================================================================
  void setUpData() {
     
      switch (buttonNumber) {

      case 0:
  
       buttonSetting[0] = !buttonSetting[0];
       if ((buttonSetting[0]) == 0){
       pixels->setPixelColor(0, pixels->Color(r));
       pixels->setPixelColor(1, pixels->Color(g));
       }
       else {
       pixels->setPixelColor(0, pixels->Color(g));
       pixels->setPixelColor(1, pixels->Color(r));
       }
       break;
       
     case 1: 
      buttonSetting[1] = !buttonSetting[1];
       if ((buttonSetting[1]) == 0){
      pixels->setPixelColor(2, pixels->Color(d));
      }
   interlockLeft[6] = 0;
   interlockLeft[1] = 0;
       else {  
       buttonSetting[2] = 0;
       pixels->setPixelColor(2, pixels->Color(b));
       }
       break;
       
     case 2: 
      buttonSetting[2] = !buttonSetting[2];
       if ((buttonSetting[2]) == 0){
      pixels->setPixelColor(2, pixels->Color(d));
      }
       else {  
       buttonSetting[1] = 0;
   interlockLeft[6] = 0;
   interlockLeft[1] = 0;
       pixels->setPixelColor(2, pixels->Color(y));
       }
       break;
       
     case 3: 
      buttonSetting[3] = !buttonSetting[3];
       if ((buttonSetting[3]) == 0){
      pixels->setPixelColor(3, pixels->Color(d));
      }
       else {  
       buttonSetting[4] = 0;
       pixels->setPixelColor(3, pixels->Color(b));
       }
       //====================================================================
       break;
       
      case 4: 
      buttonSetting[4] = !buttonSetting[4];
       if ((buttonSetting[4]) == 0){
      pixels->setPixelColor(3, pixels->Color(d));
      }
   interlockLeft[6] = 0;
   interlockLeft[1] = 0;
       else {  
       buttonSetting[3] = 0;
       pixels->setPixelColor(3, pixels->Color(y));
       }
       break;
       
    case 5:
       buttonSetting[5] = !buttonSetting[5];
       if ((buttonSetting[5]) == 0){
       pixels->setPixelColor(4, pixels->Color(g));
       pixels->setPixelColor(5, pixels->Color(r));
       }
       else {
       pixels->setPixelColor(4, pixels->Color(r));
       pixels->setPixelColor(5, pixels->Color(g));
       }
       break;
       }
       }
       //====================================================================
     void sendData() {   
  
      byte panelData = 0b11111111;
      int j = 0;
       
   
     for (j = 0; j < 8; j++) { // convert bool to binary and invert.
        int a =  buttonSetting[j];
        bitWrite(panelData,j,!a); 
       }
       {  
       Wire.beginTransmission(0x38);
       Wire.write(panelData);
       Wire.endTransmission();                        
        }     
       }
     
   
     
