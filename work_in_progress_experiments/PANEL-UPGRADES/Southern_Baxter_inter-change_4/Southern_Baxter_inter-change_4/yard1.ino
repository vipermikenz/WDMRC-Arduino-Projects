
 void yardTrack1 () {

  switch (track[1]) {

  case 0:

    pointLeft1[0] = 0; 
    pointLeft1[1] = 0;
    pointLeft1[2] = 0;
    yardLeft[1] = 1;
    yardRight[1] = 0;

    mainLine [track[1]] = track[0];
    
   pixels->setPixelColor(0, pixels->Color(b)); 
   pixels->setPixelColor(26, pixels->Color(r));
   pixels->setPixelColor(27, pixels->Color(g)); 
   pixels->setPixelColor(23, pixels->Color(g));
   pixels->setPixelColor(24, pixels->Color(r));
   pixels->setPixelColor(25, pixels->Color(g)); 
   pixels->setPixelColor(28, pixels->Color(b)); 
   pixels->setPixelColor(33, pixels->Color(r));
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
   pixels->setPixelColor(60, pixels->Color(y));
   
  break;

  case 9:
  
   yardLeft[1] = 0;
   yardRight[1] = 0;
   pixels->setPixelColor(28, pixels->Color(r));
   pixels->setPixelColor(33, pixels->Color(r));
   break;
   
  }
 }
