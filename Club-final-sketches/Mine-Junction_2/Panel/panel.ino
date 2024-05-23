
  void panelRead(){                   
  
    int analogPin = A0;
    int buttonValue = 1100;                // set starting point    
  
    while (buttonValue > 900) {            // wait for button press 
    
    buttonValue = analogRead(analogPin);   // read  value of analog pin      
    }
    {
    delay (100);    
    buttonValue = analogRead(analogPin);   // reread analog value of pin .  
    buttonNumber = (buttonValue/100);     
    }
    
    while (analogRead(analogPin) < 900) {  //wait for button release
     } 
    } 
