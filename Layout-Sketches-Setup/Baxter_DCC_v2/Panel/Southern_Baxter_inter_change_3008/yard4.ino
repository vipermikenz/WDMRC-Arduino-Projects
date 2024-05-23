
  void yardTrack4() {
     //set up imputs for yard 4.

    switch (track[1]) {

    case 1:

    pointLeft1[0] = 0; 
    pointLeft1[1] = 0;
    pointLeft1[6] = 1; sendDataL();
    pointLeft1[7] = 1; sendDataL(); 
    pointLeft2[3] = 0;
    
    yardLeft[4] = 1;    
    yardRight[4] = 0;

    interlockLeft[1] = 0;
    interlockLeft[3] = 1;
    interlockLeft[4] = 0;

    if (yardRoad[2] == 1) { 
    yardLeft[2] = 0;   
    pixels->setPixelColor(29, pixels->Color(r)); 
    }

    if (yardRoad[3] == 1) { 
    yardLeft[3] = 0;   
    pixels->setPixelColor(30, pixels->Color(r)); 
    }

    if (yardRoad[4] == 2) {
    yardLeft[2] = 0;     
    pixels->setPixelColor(2, pixels->Color(r));
     }

    if (yardRoad[4] == 3) {     
    pixels->setPixelColor(3, pixels->Color(r));
     }

    if (yardRoad[4] == 4) {     
    pixels->setPixelColor(4, pixels->Color(r));
     }

     if (mainLine[2]  == 2) {
      yardLeft[2] = 0;      
      
     pixels->setPixelColor(2, pixels->Color(r));
     pixels->setPixelColor(29, pixels->Color(r));  
     }     
  
    pixels->setPixelColor(1, pixels->Color(b));
    pixels->setPixelColor(5, pixels->Color(g));
    pixels->setPixelColor(6, pixels->Color(r));
    pixels->setPixelColor(7, pixels->Color(g));
   
    pixels->setPixelColor(14, pixels->Color(r));
    pixels->setPixelColor(15, pixels->Color(g));
    pixels->setPixelColor(16, pixels->Color(r));
    pixels->setPixelColor(17, pixels->Color(g));
    pixels->setPixelColor(18, pixels->Color(r));
   
    pixels->setPixelColor(30, pixels->Color(r));
    pixels->setPixelColor(31, pixels->Color(b));   
    pixels->setPixelColor(36, pixels->Color(r));

    mainLine[1] = 4;
    yardRoad[4] = 1; 
    break;
  
    case 2:
    
    pointLeft1[3] = 0; sendDataL(); // 3 way point, fire first
    pointLeft1[0] = 0; 
    pointLeft1[1] = 0;
    pointLeft1[4] = 0;
    pointLeft1[5] = 0; 
    pointLeft1[6] = 0;
    pointLeft1[7] = 0;
    pointLeft2[3] = 0;
    
    yardLeft[4] = 1;
    yardRight[4] = 0;

    interlockLeft[3] = 0;
    interlockLeft[4] = 0;

    if (yardRoad[1] == 1) {      
    pixels->setPixelColor(2, pixels->Color(r)); 
    }

    if (yardRoad[2] == 2) { 
    yardLeft[2] = 0;   
    pixels->setPixelColor(29, pixels->Color(r)); 
    }

    if (yardRoad[3] == 2) { 
    yardLeft[3] = 0;   
    pixels->setPixelColor(30, pixels->Color(r)); 
     }

    if (yardRoad[4] == 1) {     
     pixels->setPixelColor(1, pixels->Color(r));
     }
     
    if (yardRoad[4] == 3) {      
    pixels->setPixelColor(3, pixels->Color(r));
     }
     
    if (yardRoad[4] == 4) {     
    pixels->setPixelColor(4, pixels->Color(r));
     }     

   if (yardRoad[5] == 2) { 
   yardLeft[5] = 0; 
      
   pixels->setPixelColor(32, pixels->Color(r)); 
   }
  
   pixels->setPixelColor(2, pixels->Color(b));
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(6, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
   
   pixels->setPixelColor(11, pixels->Color(g));
   pixels->setPixelColor(12, pixels->Color(r));
   pixels->setPixelColor(14, pixels->Color(r));
   pixels->setPixelColor(15, pixels->Color(r));   
   pixels->setPixelColor(16, pixels->Color(g));
   pixels->setPixelColor(17, pixels->Color(g));
   pixels->setPixelColor(18, pixels->Color(r));
   
   pixels->setPixelColor(31, pixels->Color(b));
   pixels->setPixelColor(36, pixels->Color(r));

   mainLine[2] = 4;
   yardRoad[4] = 2; 
   
  break;
   
  case 3:

   pointLeft1[5] = 0; sendDataL(); // 3 way point, fire first
   pointLeft1[2] = 0; 
   pointLeft1[3] = 0;
   pointLeft1[4] = 0;
   pointLeft2[0] = 0;
   pointLeft2[1] = 0; 
   pointLeft2[3] = 1; sendDataL();
   
   yardLeft[4] = 1;
   yardRight[4] = 0;

   interlockLeft[2] = 0;
   interlockLeft[4] = 1;
   
   if (yardRoad[4] == 1) {     
   pixels->setPixelColor(1, pixels->Color(r)); 
   }

   if (yardRoad[4] == 2) {     
     pixels->setPixelColor(2, pixels->Color(r));
     }

   if (yardRoad[4] == 4) {      
     pixels->setPixelColor(4, pixels->Color(r));
     }

   if (mainLine[2] == 5) {
    yardLeft[5] = 0;
    pixels->setPixelColor(2, pixels->Color(r));
    pixels->setPixelColor(32, pixels->Color(r));
   }
  
   pixels->setPixelColor(3, pixels->Color(b));
   pixels->setPixelColor(8, pixels->Color(g));
   pixels->setPixelColor(9, pixels->Color(r));
   pixels->setPixelColor(10, pixels->Color(g));
   pixels->setPixelColor(11, pixels->Color(g));
   pixels->setPixelColor(12, pixels->Color(r));
   pixels->setPixelColor(13, pixels->Color(g));
   pixels->setPixelColor(17, pixels->Color(r));
   pixels->setPixelColor(18, pixels->Color(g));   
   pixels->setPixelColor(19, pixels->Color(r));
   
   pixels->setPixelColor(20, pixels->Color(g));
   
   pixels->setPixelColor(31, pixels->Color(b));
   pixels->setPixelColor(36, pixels->Color(r));

   mainLine[3] = 4;
   yardRoad[4] = 3; 
   
  break;
   
  case 4:
  
   pointLeft1[5] = 0; sendDataL(); // 3 way point, fire first
   pointLeft1[2] = 1; sendDataL();
   pointLeft1[3] = 1; sendDataL();
   pointLeft1[4] = 0;
    
   pointLeft2[0] = 0;
   pointLeft2[1] = 0;   
   
   yardLeft[4] = 1;
   yardLeft[5] = 0;
   yardRight[4] = 0;

    interlockLeft[2] = 0;    
    interlockLeft[4] = 1;   

   if (yardRoad[4] == 2) {       
   pixels->setPixelColor(2, pixels->Color(r)); 
   }

   if (yardRoad[4] == 3) {      
   pixels->setPixelColor(3, pixels->Color(r));
     }

    
   pixels->setPixelColor(3, pixels->Color(r));
   pixels->setPixelColor(4, pixels->Color(b));
   pixels->setPixelColor(8, pixels->Color(r));
   pixels->setPixelColor(9, pixels->Color(g));
   
   pixels->setPixelColor(10, pixels->Color(r));
   pixels->setPixelColor(11, pixels->Color(g));
   pixels->setPixelColor(12, pixels->Color(r));
   pixels->setPixelColor(13, pixels->Color(g));
   pixels->setPixelColor(17, pixels->Color(r));
   pixels->setPixelColor(18, pixels->Color(g));   
   pixels->setPixelColor(19, pixels->Color(r));
   
   pixels->setPixelColor(20, pixels->Color(g));
   
   pixels->setPixelColor(31, pixels->Color(b));
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(r));

   mainLine[4] = 4;
   yardRoad[4] = 4;
    
  break;



  case 5:

   pointRight1[2] = 0;
   pointRight1[3] = 0;
   pointRight1[4] = 1; sendDataR();
   pointRight1[5] = 1; sendDataR();
         
   yardLeft[4] = 0;
   yardRight[1] = 0;
   yardRight[2] = 0;
   yardRight[3] = 0;
   yardRight[4] = 1; 

    interlockRight[2] = 1;
    interlockRight[3] = 1;
    
   if (mainLine[5] == 1) { 
   yardRight[1] = 0;   
   pixels->setPixelColor(33, pixels->Color(r)); 
   }  
   if (mainLine[5] == 2) { 
   yardRight[2] = 0;   
   pixels->setPixelColor(34, pixels->Color(r)); 
   }  
   
   if (mainLine[5] == 3) {   
   pixels->setPixelColor(35, pixels->Color(r)); 
   }
   
   pixels->setPixelColor(31, pixels->Color(r));
   pixels->setPixelColor(33, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(r));
   pixels->setPixelColor(44, pixels->Color(g));
   pixels->setPixelColor(45, pixels->Color(r));
   pixels->setPixelColor(46, pixels->Color(r));   
   pixels->setPixelColor(47, pixels->Color(g));

   pixels->setPixelColor(60, pixels->Color(y)); 

   mainLine[5] = 4;
   yardRoad[4] = 5; 
   
   break;
 
  case 6:

   pointRight1[4] = 0;
   pointRight2[0] = 0;
   pointRight2[1] = 0;
   pointRight2[2] = 0;
   pointRight2[3] = 0;
   pointRight2[4] = 1; sendDataR();
   pointRight2[5] = 1; sendDataR();
         
   yardLeft[4] = 0;
   yardRight[4] = 1;

    interlockRight[3] = 0;
    interlockRight[5] = 0;
    interlockRight[6] = 1;

   if (mainLine[6] == 2) { 
   yardRight[2] = 0;   
   pixels->setPixelColor(34, pixels->Color(r)); 
   }

   
   if (mainLine[5] == 4) {   
   pixels->setPixelColor(60, pixels->Color(r)); 
   }

   if (mainLine[6] == 3) { 
   yardRight[3] = 0;   
   pixels->setPixelColor(35, pixels->Color(r)); 
   }


   if (mainLine[6] == 5) { 
   yardRight[5] = 0;   
   pixels->setPixelColor(37, pixels->Color(r)); 
   }
    
   pixels->setPixelColor(23, pixels->Color(g));
    
   pixels->setPixelColor(31, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(g));
   
   pixels->setPixelColor(50, pixels->Color(g));
   pixels->setPixelColor(51, pixels->Color(r));
   pixels->setPixelColor(52, pixels->Color(g));   
   pixels->setPixelColor(53, pixels->Color(g));
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(57, pixels->Color(r));
   pixels->setPixelColor(58, pixels->Color(g));
   pixels->setPixelColor(59, pixels->Color(r));

   pixels->setPixelColor(61, pixels->Color(y)); 
   pixels->setPixelColor(62, pixels->Color(r)); 

   mainLine[6] = 4;
   yardRoad[4] = 6; 
   
   break;
   
  case 7:

   pointRight1[4] = 0;
   pointRight2[0] = 0;
   pointRight2[1] = 0;
   pointRight2[2] = 0;
   pointRight2[3] = 0;
   pointRight2[4] = 0;
   pointRight2[5] = 0;
         
   yardLeft[4] = 0;
   yardRight[4] = 1;

   interlockRight[3] = 0;
   interlockRight[5] = 0;
   interlockRight[6] = 0;

   if (mainLine[5] == 4) { 
   pointRight1[2] = 0;
   pointRight1[3] = 0;
   pointRight1[5] = 0;
   interlockRight[2] = 0;
   
   pixels->setPixelColor(44, pixels->Color(r));
   pixels->setPixelColor(45, pixels->Color(g));
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));
   pixels->setPixelColor(60, pixels->Color(r));
   }
   
   if (mainLine[7] == 2) { 
   yardRight[2] = 0;   
   pixels->setPixelColor(34, pixels->Color(r)); 
   }

   if (mainLine[7] == 3) { 
   yardRight[3] = 0;   
   pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[7] == 5) { 
   yardRight[5] = 0;   
   pixels->setPixelColor(37, pixels->Color(r)); 
   }
    
   pixels->setPixelColor(31, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(g));
   
   pixels->setPixelColor(50, pixels->Color(g));
   pixels->setPixelColor(51, pixels->Color(r));
   pixels->setPixelColor(52, pixels->Color(g));   
   pixels->setPixelColor(53, pixels->Color(g));
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(57, pixels->Color(g));
   pixels->setPixelColor(58, pixels->Color(r));
   pixels->setPixelColor(59, pixels->Color(g));
   
  // pixels->setPixelColor(61, pixels->Color(r));
   pixels->setPixelColor(62, pixels->Color(y));

   mainLine[7] = 4;
   yardRoad[4] = 7;
   
   break; 

    case 9:
  
   yardLeft[4] = 0;
   yardRight[4] = 0;
   pixels->setPixelColor(31, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(r));
   
   yardRoad[4] = 9;
   
   break;   
  }
   }
