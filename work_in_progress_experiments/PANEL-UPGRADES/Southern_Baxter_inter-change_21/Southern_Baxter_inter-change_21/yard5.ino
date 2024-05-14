
void yardTrack5() { 
   //set up imputs for yard 5.

  switch (track[1]) {

    case 2:

   pointLeft1[0] = 0; 
   pointLeft1[1] = 0;
   pointLeft1[4] = 1; sendDataL();
   pointLeft1[5] = 1; sendDataL(); 
   pointLeft2[0] = 1; sendDataL();
   pointLeft2[1] = 1; sendDataL();   
      
   yardLeft[5] = 1;
   yardRight[5] = 0;

    interlockLeft[2] = 1;
    interlockLeft[5] = 1;

   if (yardRoad[2] == 2) { 
    yardLeft[2] = 0;   
   pixels->setPixelColor(29, pixels->Color(r)); 
   }
   
   if (yardRoad[3] == 2) { 
   yardLeft[3] = 0;   
   pixels->setPixelColor(30, pixels->Color(r)); 
   }

   if (yardRoad[4] == 2) { 
   yardLeft[4] = 0;
   pixels->setPixelColor(31, pixels->Color(r)); 
   }

   if (yardRoad[5] == 3) {     
     pixels->setPixelColor(3, pixels->Color(r));
     }

     if (yardRoad[5] == 4) {     
     pixels->setPixelColor(4, pixels->Color(r));
     }
   
   pixels->setPixelColor(2, pixels->Color(b)); 
   pixels->setPixelColor(3, pixels->Color(r));
   pixels->setPixelColor(4, pixels->Color(r));
   
   pixels->setPixelColor(11, pixels->Color(r));
   pixels->setPixelColor(12, pixels->Color(g));
   pixels->setPixelColor(13, pixels->Color(r));
   pixels->setPixelColor(18, pixels->Color(r));
   pixels->setPixelColor(19, pixels->Color(g));
   
   pixels->setPixelColor(20, pixels->Color(r));
   
   pixels->setPixelColor(32, pixels->Color(b));

   mainLine[2] = 5;
   yardRoad[5] = 2;
   break;

   case 3: 
    
   pointLeft1[2] = 0;
   pointLeft1[3] = 0;
   pointLeft1[4] = 0; 
   pointLeft1[5] = 0;
   pointLeft2[0] = 1; sendDataL();   
   pointLeft2[1] = 1; sendDataL();
       
   yardLeft[5] = 1;
   yardRight[5] = 0;

   interlockLeft[2] = 0;
   interlockLeft[5] = 1;   

   if (mainLine[3] == 4) { 
   yardLeft[4] = 0;   
   pixels->setPixelColor(31, pixels->Color(r)); 
   } 

   if (mainLine[3] == 2) {     
   pixels->setPixelColor(2, pixels->Color(r));
     }

   if (mainLine[3] == 5) {     
   pixels->setPixelColor(4, pixels->Color(r));
   }
   
   pixels->setPixelColor(3, pixels->Color(b)); 
   pixels->setPixelColor(4, pixels->Color(r));
   pixels->setPixelColor(8, pixels->Color(g));
   pixels->setPixelColor(9, pixels->Color(r));
   
   pixels->setPixelColor(10, pixels->Color(g));   
   pixels->setPixelColor(11, pixels->Color(g));
   pixels->setPixelColor(12, pixels->Color(r));
   pixels->setPixelColor(13, pixels->Color(g));
   pixels->setPixelColor(18, pixels->Color(r));
   pixels->setPixelColor(19, pixels->Color(g));
   
   pixels->setPixelColor(20, pixels->Color(r));
   
   pixels->setPixelColor(32, pixels->Color(b));

   mainLine[3] = 5;
   yardRoad[5] = 3;
   
   break;   
  
   case 4:   
   
   pointLeft1[2] = 0;    
   pointLeft1[3] = 0;   
   pointLeft2[0] = 0;
   pointLeft2[1] = 0;
       
   yardLeft[5] = 1;
   yardRight[5] = 0;
   
   interlockLeft[5] = 0;

   if (yardRoad[4] == 4) { 
   yardLeft[4] = 0;   
   pixels->setPixelColor(31, pixels->Color(r)); 
   }

   if (yardRoad[5] == 2) {     
   pixels->setPixelColor(2, pixels->Color(r));
     }

   if (yardRoad[5] == 3) {     
   pixels->setPixelColor(3, pixels->Color(r));
     }
       
   pixels->setPixelColor(4, pixels->Color(b)); 
   pixels->setPixelColor(8, pixels->Color(g));
   pixels->setPixelColor(9, pixels->Color(r));
   
   pixels->setPixelColor(10, pixels->Color(g));    
   pixels->setPixelColor(18, pixels->Color(g));
   pixels->setPixelColor(19, pixels->Color(r));
   
   pixels->setPixelColor(20, pixels->Color(g));
   
   pixels->setPixelColor(32, pixels->Color(b));
   pixels->setPixelColor(37, pixels->Color(r));
   
   pixels->setPixelColor(56, pixels->Color(r));

   mainLine[4] = 5;
   yardRoad[5] = 4; 
   
   break;

   case 6:

   pointRight2[0] = 1; sendDataR();
   pointRight2[1] = 1; sendDataR();   
   pointRight2[2] = 0;
   pointRight2[3] = 0;
   pointRight2[4] = 1; sendDataR();
   pointRight2[5] = 1; sendDataR();

   yardLeft[5] = 0;
   yardRight[5] = 1; 

    interlockRight[4] = 1;
    interlockRight[6] = 1;    

   if (mainLine[6] == 2) { 
   yardRight[2] = 0; 
     
   pixels->setPixelColor(34, pixels->Color(r)); 
   
   }
  if (mainLine[6] == 3) { 
   yardRight[3] = 0;   
   pixels->setPixelColor(35, pixels->Color(r)); 
   }
   
   if (mainLine[6] == 4) { 
   yardRight[4] = 0;     
   pixels->setPixelColor(36, pixels->Color(r));
   } 
   
  if (mainLine[7] == 4) { 
   yardRight[4] = 0;     
   pixels->setPixelColor(36, pixels->Color(r));
   pixels->setPixelColor(61, pixels->Color(r));
   } 
     
 
   pixels->setPixelColor(37, pixels->Color(y));
   
   pixels->setPixelColor(50, pixels->Color(r));
   pixels->setPixelColor(51, pixels->Color(g));
   pixels->setPixelColor(52, pixels->Color(r));
   pixels->setPixelColor(53, pixels->Color(g));
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(56, pixels->Color(r));
   pixels->setPixelColor(57, pixels->Color(g));
   pixels->setPixelColor(58, pixels->Color(r));
   pixels->setPixelColor(59, pixels->Color(r));

   pixels->setPixelColor(61, pixels->Color(y)); 
   pixels->setPixelColor(62, pixels->Color(r));
   mainLine[6] = 5;
   yardRoad[5] = 6; 
   
   break;
   
   case 7:

   pointRight2[0] = 1; sendDataR();
   pointRight2[1] = 1; sendDataR();
   pointRight2[2] = 0;
   pointRight2[3] = 0;
   pointRight2[4] = 0;
   pointRight2[5] = 0;

   yardLeft[5] = 0;
   yardRight[5] = 1; 

    interlockRight[4] = 1;
    interlockRight[6] = 0;    

   if (mainLine[7] == 2) { 
   yardRight[2] = 0;   
   pixels->setPixelColor(34, pixels->Color(r)); 
   }

   if (mainLine[7] == 3) { 
   yardRight[3] = 0;   
   pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[7] == 4) { 
   yardRight[4] = 0;   
   pixels->setPixelColor(36, pixels->Color(r)); 
   }

   pixels->setPixelColor(31, pixels->Color(r));   
   pixels->setPixelColor(37, pixels->Color(y));
   
   pixels->setPixelColor(50, pixels->Color(r));
   pixels->setPixelColor(51, pixels->Color(g));
   pixels->setPixelColor(52, pixels->Color(r));
   pixels->setPixelColor(53, pixels->Color(g));
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(56, pixels->Color(g));
   pixels->setPixelColor(57, pixels->Color(r));
   pixels->setPixelColor(58, pixels->Color(g));
   pixels->setPixelColor(59, pixels->Color(r));

   pixels->setPixelColor(62, pixels->Color(y));   

   mainLine[7] = 5;
   yardRoad[5] = 7; 
   
   break;

   case 8:

   pointRight2[0] = 0;
   pointRight2[0] = 0;

   yardLeft[5] = 0;
   yardRight[5] = 1;

   interlockRight[4] = 0;
    
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(37, pixels->Color(y));
   
   pixels->setPixelColor(50, pixels->Color(g));
   pixels->setPixelColor(51, pixels->Color(r));
   pixels->setPixelColor(52, pixels->Color(g));
   pixels->setPixelColor(56, pixels->Color(g));     

   mainLine[8] = 5;
   yardRoad[5] = 8;
   
   break;
   
   case 9:
  
   yardLeft[5] = 0;
   yardRight[5] = 0;

   if (yardRoad[5] == 2) {     
     pixels->setPixelColor(2, pixels->Color(r));
     }

     if (yardRoad[5] == 3) {     
     pixels->setPixelColor(3, pixels->Color(r));
     }
     
     if (yardRoad[5] == 4) {     
     pixels->setPixelColor(4, pixels->Color(r));
     }

     if (yardRoad[5] == 6) {     
     pixels->setPixelColor(61, pixels->Color(r));
     }

     if (yardRoad[5] == 7) {     
     pixels->setPixelColor(62, pixels->Color(r));
     }

     if (yardRoad[5] == 8) {     
     pixels->setPixelColor(59, pixels->Color(r));
     }

        
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(37, pixels->Color(r));

   yardRoad[5] = 9;
     
   break;  
 }
}
