
 void yardTrack1 () {
   //set up imputs for yard 1.
  
  int t = track[1];
  switch (t) {

  case 0:

    pointLeft2[4] = 0; 
    pointLeft2[5] = 0;
    pointLeft2[6] = 0;
    
    yardLeft[0] = 0;
    yardLeft[1] = 1; sendDataL();
    yardRight[1] = 0;
    
    if (mainLine[0] == 2) {
    yardLeft[2] = 0; 
   
    pixels->setPixelColor(29, pixels->Color(r));   
    }    
    
   pixels->setPixelColor(0, pixels->Color(b)); 
   
   pixels->setPixelColor(26, pixels->Color(r));
   pixels->setPixelColor(27, pixels->Color(g)); 
   pixels->setPixelColor(23, pixels->Color(g));
   pixels->setPixelColor(24, pixels->Color(r));
   pixels->setPixelColor(25, pixels->Color(g)); 
   pixels->setPixelColor(28, pixels->Color(b));
    
   pixels->setPixelColor(33, pixels->Color(r));

   mainLine[0] = 1;
   yardRoad[1] = 0;
   
   break;

   case 5:

   pointRight1[0] = 0;
   pointRight1[1] = 0;
   pointRight1[2] = 0;
   pointRight1[3] = 0;
   pointRight1[4] = 0;
   pointRight1[5] = 0;
   
   yardLeft[1] = 0;
   yardRight[1] = 1;   

   if (mainLine[5] == 2) {
    yardRight[2] = 0;
    interlockRight[1] = 0;
    pixels->setPixelColor(34, pixels->Color(r));      
   }
   
   if (mainLine[5] == 3) {
    yardRight[3] = 0;
    
    pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[5] == 3) {
    yardRight[3] = 0;
    pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[5] == 4) {
    yardRight[4] = 0;
    pixels->setPixelColor(36, pixels->Color(r)); 
   }
   
   
   pixels->setPixelColor(28, pixels->Color(r)); 
   pixels->setPixelColor(33, pixels->Color(y));
   pixels->setPixelColor(38, pixels->Color(g));
   pixels->setPixelColor(39, pixels->Color(r));   
   pixels->setPixelColor(40, pixels->Color(g));
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(g));
   pixels->setPixelColor(44, pixels->Color(r));
   pixels->setPixelColor(45, pixels->Color(g));
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));
   pixels->setPixelColor(60, pixels->Color(y));    

   mainLine[track[5]] = 1;
   yardRoad[track[0]] = 5;
   
   break;
   
  case 9:
  
   yardLeft[1] = 0;
   yardRight[1] = 0;
   pixels->setPixelColor(28, pixels->Color(r));
   pixels->setPixelColor(33, pixels->Color(r));

   yardRoad[1] = 9;
   
   break; 
    }
   }

   
