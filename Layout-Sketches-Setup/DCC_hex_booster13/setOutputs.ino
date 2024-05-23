 void setOutputs() { 

    
  if (enableState[0] == HIGH) {     
  digitalWrite((12), HIGH); //enable imputs to "HIGH".
  pixels->setPixelColor(1, pixels->Color(g));
     }
   if (enableState[1] == HIGH) {     
  digitalWrite((11), HIGH); //enable imputs to "HIGH".
  pixels->setPixelColor(2, pixels->Color(g));
     }
   if (enableState[2] == HIGH) {     
  digitalWrite((10), HIGH); //enable imputs to "HIGH".
   pixels->setPixelColor(3, pixels->Color(g));
     }
   if (enableState[3] == HIGH) {     
  digitalWrite(( 9), HIGH); //enable imputs to "HIGH".
  pixels->setPixelColor(4, pixels->Color(g));
     }
 if (enableState[4] == HIGH) {     
  digitalWrite(( 8), HIGH); //enable imputs to "HIGH".
  pixels->setPixelColor(5, pixels->Color(g));
     }
   if (enableState[5] == HIGH) {     
  digitalWrite(( 7), HIGH); //enable imputs to "HIGH".
  pixels->setPixelColor(6, pixels->Color(g));
     }
     {  
  pixels->show();   // Send the initial pixel colors to the panel.
 }
 }
