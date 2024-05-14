 void panelRead(){  
       
   int buttonValue = 1100;             //set starting point
   m = 0;
   
  while (buttonValue > 960) {          // wait for button press
   pinRead = !pinRead;  // increment pin
   
   buttonValue = analogRead (pinRead); // reread analog value of pin
    }
  
   delay (100);    
   buttonValue = analogRead (pinRead); // reread analog value of pin .       
   track[pinRead] = (buttonValue/100);
   m = 1;
   
   
  while (analogRead (pinRead) < 900) {//check for button release
    buttonValue = analogRead (pinRead); // reread analog value of pin 
  delay (100);
    }
   
   

   pinRead = !pinRead;
    
    buttonValue = 1000;
    int n = 0;
     
 while ((buttonValue > 900) && (n < 50)) {          // wait for button press
  delay (100);
  n++;
   buttonValue = analogRead (pinRead);   
   }
   
  delay(100);
   
   buttonValue = analogRead (pinRead); // reread analog value of pin
  if (buttonValue > 900){
    buttonValue = 950;
  }
     track[pinRead] = (buttonValue/100);
      m = 0;
          
    
  
   
  while (analogRead (pinRead) < 900) {//check for button release
    buttonValue = analogRead (pinRead); // reread analog value of pin 
  delay (100);
    }

   mainLine[track[0]] = track[1];
   
   Serial.print (track[0]);
   Serial.println(track[1]);

  } 
     
   /* int buttonValue = 1100;             //set starting point
   
   
  while (buttonValue > 900) {          // wait for button press
   pinRead = !pinRead;  // increment pin
   
   buttonValue = analogRead (pinRead); // reread analog value of pin
    }
  {
   delay (100);    
   buttonValue = analogRead (pinRead); // reread analog value of pin . 

   
   track[pinRead] = (buttonValue/100);
   }

   
  while (analogRead (pinRead) < 900) {//check for button release
    buttonValue = analogRead (pinRead); // reread analog value of pin 
  delay (100);
    }
   
   

   pinRead = !pinRead;
    //int n = 0;
    buttonValue = analogRead (pinRead);
     
 while (buttonValue > 900) {          // wait for button press
  
   buttonValue = analogRead (pinRead);   
   }
   {
  delay(100);
   
   buttonValue = analogRead (pinRead); // reread analog value of pin
  
     track[pinRead] = (buttonValue/100);
     }     
    
  
   
  while (analogRead (pinRead) < 900) {//check for button release
    buttonValue = analogRead (pinRead); // reread analog value of pin 
  delay (100);
    }
{
   Serial.print (track[0]);
   Serial.println(track[1]);
   }
  } */
  
