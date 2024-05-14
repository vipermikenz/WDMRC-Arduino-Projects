
void panelRead(){  
     
   int buttonValue = 1100;               //set starting point
   int pinRead = 0;// Anolog pins A0 ,A1,A2

   while (buttonValue > 900) {           // wait for button press
    pinRead ++ ; 
    if (pinRead == 3){
      pinRead = 0;
      }   
    buttonValue = analogRead (pinRead);  // reread analog value of pin
    }
  
   delay (50);    
   buttonValue = analogRead (pinRead);  // reread analog value of pin .       
   track[pinRead] = (buttonValue/100);
     
   while (analogRead (pinRead) < 900) {  //check for button release
    buttonValue = analogRead (pinRead); // reread analog value of pin  
    } 

   if  (pinRead == 2){ 
    track[0] = 11;
    track[1] = (buttonValue/100);
   }  
   else {
   pinRead = !pinRead;// switch analog pin    
    buttonValue = 1000;
   }
    int n = 0;//counter.     
  while ((buttonValue > 900) && (n < 30)) { // wait 5 secondsfor button press.
  delay (100);
  n++;
   buttonValue = analogRead (pinRead);   
   }
   
  delay(50);
   
   buttonValue = analogRead (pinRead); // reread analog value of pin
  if (buttonValue > 900){
    buttonValue = 950;                 // no second button press, set to output a 9.
  }
     track[pinRead] = (buttonValue/100);
      
   
  while (analogRead (pinRead) < 900) {  //check for button release
   buttonValue = analogRead (pinRead); // reread analog value of pin 
  delay (100);
    }  
   
   Serial.print (      track[0]);
   Serial.println(      track[1]);
   

  } 
     
 
