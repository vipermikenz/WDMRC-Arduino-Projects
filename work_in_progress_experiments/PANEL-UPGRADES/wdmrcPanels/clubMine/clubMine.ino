 /* Arduino sketch for Club Port side Mine.
Composed using ArduinoDroid on a tablet by Gary Snow*/ 
 
  #include <Adafruit_NeoPixel.h>
  #include <Wire.h>  
  #include <SPI.h>
  #ifdef __AVR__
  #endif
  
  Adafruit_NeoPixel *pixels; //neopixel object pointer.
 
  int pin  = 6; // neopixel pin
  int ledBril = 10; // neopixel brilliance.
  int numPixels   =  8; //Number of pixels. 
  int pixelFormat = NEO_GRB + NEO_KHZ800;// NeoPixel color format & data rate.
  int buttonNumber = 9;
  
  #define r ledBril,  0,  0 // red.
  #define g 0, ledBril,  0 //green.
   
  int pointNumber = 0;
  bool buttonSetting[8] = {0,0,0,0,0,0,0,0}; 

  //=======================================================
  void setup() {
    
  Wire.begin();  
  Serial.begin(9600); 
   // Then create a new NeoPixel object dynamically with these values:
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);

  pixels->begin(); // Initialize NeoPixel. 
  
  delay(1000);//allow system to stabilize.

  iniNeo();        // set neopixels to start position.
  }
  //========================================================
  void loop(){ 
  
   panelRead();  // wait for button press and update panelData,
    
   setUpData();  // update button settings.
    
   pixels->show();

   sendData();
   }   
   //========================================================
  void panelRead() {
    
  int analogPin = A0;
    int buttonValue = 1100;                // set starting point    
  
    while (buttonValue > 900) {            // wait for button press 
    
    buttonValue = analogRead(analogPin); // read  value of analog pin      
    }
    {
    delay (10);    
    buttonValue = analogRead(analogPin);  // reread analog value of pin .  
    buttonNumber = (buttonValue/100);     
    }
    while (analogRead(analogPin) < 900) {//check for button release
    delay (100);
     } 
    } 
 //========================================================

    void setUpData() {
      
      switch (buttonNumber) {

 case 0: 
      buttonSetting[3] = !buttonSetting[3];
       if ((buttonSetting[3]) == 0){
      pixels->setPixelColor(0, pixels->Color(r));
      pixels->setPixelColor(1, pixels->Color(g));
       }
       else {
       pixels->setPixelColor(0, pixels->Color(g));
       pixels->setPixelColor(1, pixels->Color(r));
       }
       break;       
       
    case 1: 
      buttonSetting[2] = !buttonSetting[2];
       if ((buttonSetting[2]) == 0){
      pixels->setPixelColor(2, pixels->Color(g));
      pixels->setPixelColor(3, pixels->Color(r));
      }
       else {  
      pixels->setPixelColor(2, pixels->Color(r));
      pixels->setPixelColor(3,  pixels->Color(g)) ;
       }
       break;

     case 2:
       buttonSetting[1] = !buttonSetting[1];
       if ((buttonSetting[1]) == 0){
       buttonSetting[4] = 0; //kill bay.
       pixels->setPixelColor(4, pixels->Color(g));
       pixels->setPixelColor(5, pixels->Color(r));
       }
       else {
       buttonSetting[4] = 1; // power bay.
       pixels->setPixelColor(4, pixels->Color(r));
       pixels->setPixelColor(5, pixels->Color(g));
       }
       break;
       
     case 3:
       buttonSetting[0] = !buttonSetting[0]; //invert buttonSetting.
       if ((buttonSetting[0]) == 0){
       pixels->setPixelColor(6, pixels->Color(r));
       pixels->setPixelColor(7, pixels->Color(g));
       }
       else {
       pixels->setPixelColor(6, pixels->Color(g));
       pixels->setPixelColor(7, pixels->Color(r));
   
       }
       break;
       
       }   
       }
//===============================================================
 
  void iniNeo(){ 
  
   pixels->setPixelColor(0, pixels->Color(r));
   pixels->setPixelColor(1, pixels->Color(g));
   pixels->setPixelColor(2, pixels->Color(g));
   pixels->setPixelColor(3, pixels->Color(r));
   pixels->setPixelColor(4, pixels->Color(g));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(6, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
  
   pixels->show();   // Send the initial pixel colors to the panel.
    
  }
//===============================================================

  void sendData() {  
      
  int j = 0;
  byte panelData = 0b11111111;
   
  for (j = 0; j < 8; j++) { // convert bool to binary and invert.
   int a =  buttonSetting[j];
   bitWrite(panelData,j,!a); 
   }
   {  
   Wire.beginTransmission(0x20);            
   Wire.write(panelData);
   Wire.endTransmission();                        
    }     
   }
//============================================================END.
