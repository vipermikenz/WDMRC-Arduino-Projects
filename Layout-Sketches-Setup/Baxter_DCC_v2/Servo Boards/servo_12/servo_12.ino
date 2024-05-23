#include <Servo.h>
int buttonState = 0; 

int set[5] = { 90, 35, 155, 75, 95};
int thrown[5] = { 90,115,65,125,55};
// create a servo object
 Servo point1;  
 Servo point2; 
 Servo point3; 
 Servo point4; 
//===========================================================
void setup() 
 { 
  // set the mode for the digital pins in use
  pinMode(2, INPUT);
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  pinMode(16, INPUT);
  pinMode(17, INPUT);
  
  // setup the servo
  point1.attach(6);  // attach to the servo on pin 6
  point2.attach(7);  // attach to the servo on pin 7
  point3.attach(8);  // attach to the servo on pin 8
  point4.attach(9);  // attach to the servo on pin 9

 
  
  point1.write(set[1]);// set the initial servo position
  point2.write(set[2]); 
  point3.write(set[3]);
  point4.write(set[4]);
  }
//=================================================================
void loop() {

  while (digitalRead(2) == 0) {
  point1.write(set[0]);// set servos to 90 degrees.
   delay(100);
  point2.write(set[0]);// and hold for manual adjustment. 
   delay(100);
  point3.write(set[0]);
   delay(100);
  point4.write(set[0]);
   delay(100); 
  }
  {
 buttonState = digitalRead(14);  // read the input pin
 if(buttonState == 1){      
    point1.write(set[1]); // update the servo
  }
 else {
    point1.write(thrown[1]);
   }
  }
  { 
  delay(100);
   buttonState = digitalRead(15);  
 if(buttonState == 1){      
   point2.write(set[2]); 
  }
 else {
   point2.write(thrown[2]);
   }
  }  
  {
 delay(100);
   buttonState = digitalRead(16);  
 if(buttonState == 1){      
   point3.write(set[3]); 
  }
 else {
   point3.write(thrown[3]);
   }
  }
  {
 delay(100);
   buttonState = digitalRead(17); 
 if(buttonState == 1){      
   point4.write(set[4]); 
  }
 else {
  point4.write(thrown[4]);
    } 
   }
  }
  
 //============================================END
