
  void yardTrack0() {

   //set up imputs for yard 0.

   pointLeft2[4] = 0;// position point settings
   pointLeft2[5] = 0;   
   pointLeft2[6] = 1; sendDataL();
   
   yardLeft[0] = 1;// set yard power feeds.
   yardLeft[1] = 0; 

   if (mainLine[0] == 2) {
    yardLeft[2] = 0;

   pixels->setPixelColor(29, pixels->Color(r)); 
   }
   
    
   pixels->setPixelColor(0, pixels->Color(b)); 
   pixels->setPixelColor(23, pixels->Color(g));
   pixels->setPixelColor(24, pixels->Color(r));
   pixels->setPixelColor(25, pixels->Color(g)); 
   pixels->setPixelColor(26, pixels->Color(b));
   pixels->setPixelColor(27, pixels->Color(r)); 
   pixels->setPixelColor(28, pixels->Color(r)); 

   mainLine[0] = 0;
   yardRoad[0] = 0;
   }

  
