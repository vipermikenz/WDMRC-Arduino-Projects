 
 
  void readImputs() { // Check polyfuses and if activated shut down H bridge.   

    if  (digitalRead(14) == LOW){      
      enableState[0] = LOW; 
      digitalWrite((12), LOW); //enable imputs to "LOW".
      pixels->setPixelColor(1, pixels->Color(r));
      }
     
    if  (digitalRead(15) == LOW){
      enableState[1] = LOW; 
      digitalWrite((11), LOW); 
      pixels->setPixelColor(2, pixels->Color(r));
      }
      
    if  (digitalRead(16) == LOW){      
      enableState[2] = LOW;
      digitalWrite((10), LOW);  
      pixels->setPixelColor(3, pixels->Color(r));
      }
      
    if  (digitalRead(17) == LOW){     
      enableState[3] = LOW;
      digitalWrite((9), LOW);     
      pixels->setPixelColor(4, pixels->Color(r));
      }    
    if  (digitalRead(18) == LOW){      
      enableState[4] = LOW;
      digitalWrite((8), LOW);  
      pixels->setPixelColor(5, pixels->Color(r));
      }
      if  (digitalRead(19) == LOW){      
      enableState[5] = LOW;
      digitalWrite((7), LOW);  
      pixels->setPixelColor(5, pixels->Color(r));
      }
      
      
    if  (digitalRead(21) == LOW){   //reset enabl;e.

      enableState[0] = HIGH;
      enableState[1] = HIGH;
      enableState[2] = HIGH;
      enableState[3] = HIGH;
      enableState[4] = HIGH;
      enableState[5] = HIGH; 

      iniNeo(); // pixels to green.
      }
     
    if  (digitalRead(3)== HIGH){  
      pixels->setPixelColor(0, pixels->Color(b)); 
      }
      else{
      pixels->setPixelColor(0, pixels->Color(d)) ;
      }

       {
      pixels->show();   // Send the initial pixel colors to the panel.
      }
      }