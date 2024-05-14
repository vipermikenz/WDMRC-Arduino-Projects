/*
 Copyright2020 - SERVO SWITCH CONTROL - WDMRC - Mike Hill
 Code is a combination of things I have discovered
 */
 
#include <Servo.h>

// constant variables used to set servo angles, in degrees
const int straight = 70; 
const int switched = 120;

// constant variables holding the ids of the pins we are using
const int buttonpin = 8;
const int servopin = 9;

// servo movement step delay, in milliseconds
const int step_delay = 30;

// create a servo object
Servo myservo;  
 
// global variables to store servo position
int pos = straight; // current
int old_pos = pos; // previous

void setup() 
{ 
  // set the mode for the digital pins in use
  pinMode(buttonpin, INPUT);
   
  // setup the servo
  myservo.attach(servopin);  // attach to the servo on pin 9
  myservo.write(pos); // set the initial servo position
}

void loop() 
{ 
  int button_state = digitalRead(buttonpin);
  if(button_state == HIGH){
    
    old_pos = pos;   // save the current position
    pos = pos == straight ? switched: straight;
       
    if(old_pos < pos){   // if the new angle is higher
      // increment the servo position from oldpos to pos
      for(int wdmrc = old_pos + 1; wdmrc <= pos; wdmrc++){  
        myservo.write(wdmrc); // write the next position to the servo
        delay(step_delay); // wait
      }
    } else {  // otherwise the new angle is equal or lower
      for(int wdmrc = old_pos - 1; wdmrc >= pos; wdmrc--){ 
        myservo.write(wdmrc); // write the next position to the servo
        delay(step_delay); // wait
      }
    }
    
  } 
}// end of loop
