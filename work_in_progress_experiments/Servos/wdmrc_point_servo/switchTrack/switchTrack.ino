/*
 Copyright2020 - SERVO SWITCH CONTROL - WDMRC - Mike Hill
 Code is a combination of things I have discovered
 
 A maximum of 11 servo objects can be installed on the nano
 A maximum of eight servo objects can be created from library
 Only change constants (speed, range_low and range_high)
 install the VarSpeedServo.h Library before use!
*/

#include <VarSpeedServo.h>


// the total number of servos
const int NumberServos = 8;     

// arrays holding all indexable constants & variables
VarSpeedServo myservos[NumberServos];
bool switchState[NumberServos];
unsigned long detachMillis[NumberServos];

//Constants

//Servo nr                   0   1   2   3   4   5   6   7
const byte ButtonPins[] =   {A0, A1, A2, A3, A4, A5, 2,  3 };
const byte ServoPins[] =    {4,  5,  6,  7,  8,  9,  10, 11};
const byte RangeLow[] =     {60, 60, 60, 60, 60, 60, 60, 60};
const byte RangeHigh[] =    {95, 95, 95, 95, 95, 95, 95, 95};
const byte TravelSpeed[] =  {5,  5,  5,  5,  5,  5,  5,  5 };

//detach after 10 seconds
const unsigned int DetachTime = 10000; 

int wdmrc;

void setup() 
{ 
  for (byte wdmrc = 0; wdmrc < NumberServos; wdmrc++)
  {
    pinMode(ServoPins[wdmrc], OUTPUT);
    pinMode(ButtonPins[wdmrc], INPUT); 
    digitalWrite(ButtonPins[wdmrc], LOW);
  switchState[wdmrc] = digitalRead(ButtonPins[wdmrc]);
  }
}

void loop() // runs forever to detect control buttons and change switches accordingly
{ 
  for(wdmrc = 0; wdmrc < NumberServos; wdmrc++){
    //check for change
    if(digitalRead(ButtonPins[wdmrc] != switchState[wdmrc])){
      switchState[wdmrc] != switchState[wdmrc];
      
      detachMillis[wdmrc] = millis();
      
      myservos[wdmrc].attach(ServoPins[wdmrc]); // attaches the servos on output pins to their servo objects
      
      
      if(switchState[wdmrc]){
         myservos[wdmrc].slowmove(RangeHigh[wdmrc],TravelSpeed[wdmrc]); // tell servo to go to position in 
      }
      else{
        myservos[wdmrc].slowmove(RangeLow[wdmrc],TravelSpeed[wdmrc]); // tell servo to go to position in 
      }
    }
    //is it time to detach?
    else if(myservos[wdmrc].attached() && millis() - detachMillis[wdmrc] > DetachTime){
      myservos[wdmrc].detach();
    }
    }
}
