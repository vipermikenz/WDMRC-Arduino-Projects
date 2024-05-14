
void yardTrack3() {
   //set up imputs for yard 3.

  switch (track[1]) {

   case 1:
    
   pointLeft1[0] = 0; 
   pointLeft1[1] = 0;
   pointLeft1[6] = 0;
   pointLeft1[7] = 0; 
   pointLeft2[2] = 1; sendDataL();
   
   yardLeft[3] = 1;
   yardRight[3] = 0;
   
   interlockLeft[1] = 0;

    if (yardRoad[2] == 1) {
      yardLeft[2] = 0;
     pixels->setPixelColor(29, pixels->Color(r));
     }

     if (yardRoad[2] == 2) {
     yardLeft[2] = 0;
     pixels->setPixelColor(2, pixels->Color(r));
     }
     
    if (yardRoad[3] == 2) {    
   pixels->setPixelColor(2, pixels->Color(r)); 
   }
    if (yardRoad[4] == 1) {
      yardLeft[4] = 0;
     pixels->setPixelColor(31, pixels->Color(r));
     }     

   pixels->setPixelColor(1, pixels->Color(b));
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(6, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
   
   pixels->setPixelColor(14, pixels->Color(g));
   pixels->setPixelColor(15, pixels->Color(r));
   pixels->setPixelColor(16, pixels->Color(g));
   
   pixels->setPixelColor(21, pixels->Color(r));
   pixels->setPixelColor(22, pixels->Color(g));
   
   pixels->setPixelColor(30, pixels->Color(b));
   pixels->setPixelColor(35, pixels->Color(r));

   mainLine[1] = 3;
   yardRoad[3] = 1;
   
   break;
   
   case 2:
    
   pointLeft1[0] = 1; sendDataL(); 
   pointLeft1[1] = 1; sendDataL();
   pointLeft1[6] = 0;
   pointLeft1[7] = 0; 
   pointLeft2[2] = 1; sendDataL();
   
   yardLeft[3] = 1;
   yardRight[3] = 0;

   interlockLeft[1] = 1;   

    if (yardRoad[2] == 1) {
      yardLeft[2] = 0;
     pixels->setPixelColor(1, pixels->Color(r));
     pixels->setPixelColor(29, pixels->Color(r));
     }
    
    if (yardRoad[2] == 2) {
      yardLeft[2] = 0;
     pixels->setPixelColor(29, pixels->Color(r));
     }     

     if (yardRoad[4] == 1) {
     pixels->setPixelColor(1, pixels->Color(r));
     pixels->setPixelColor(31, pixels->Color(r));
     }

     
     if (yardRoad[4] == 3) {
     pixels->setPixelColor(31, pixels->Color(r));
     }
         
     if (yardRoad[5] == 3) {
     yardLeft[5] = 0;
     pixels->setPixelColor(32, pixels->Color(r));     
     } 
     
   pixels->setPixelColor(2, pixels->Color(b));
   pixels->setPixelColor(2, pixels->Color(b));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(6, pixels->Color(g));
   pixels->setPixelColor(7, pixels->Color(r));
   
   pixels->setPixelColor(14, pixels->Color(g));
   pixels->setPixelColor(15, pixels->Color(r));
   pixels->setPixelColor(16, pixels->Color(g));
   
   pixels->setPixelColor(21, pixels->Color(r));
   pixels->setPixelColor(22, pixels->Color(g));
   
   pixels->setPixelColor(30, pixels->Color(b));
   pixels->setPixelColor(35, pixels->Color(r));

   mainLine[2] = 3;
   yardRoad[3] = 2;
   
   break;

   case 5:

   pointRight1[2] = 1; sendDataR();
   pointRight1[3] = 1; sendDataR();
   pointRight1[5] = 1; sendDataR();
   pointRight1[4] = 0;

   yardLeft[3] = 0;
   yardRight[1] = 0;
   yardRight[2] = 0;
   yardRight[3] = 1;   

   interlockRight[2] = 1;
   
   
   if (mainLine[5] == 1) { 
    yardRight[1] = 0;      
   pixels->setPixelColor(33, pixels->Color(r)); 
   }

   if (mainLine[5] == 2) {
   yardRight[2] = 0;
   pixels->setPixelColor(34, pixels->Color(r));     
    }

   if (mainLine[5] == 4) { 
   yardRight[4] = 0;
   interlockRight[3] = 0;   
   pixels->setPixelColor(36, pixels->Color(r));     
    }        
     
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(33, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(r));
   pixels->setPixelColor(35, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(g));
   pixels->setPixelColor(44, pixels->Color(g));
   pixels->setPixelColor(45, pixels->Color(r));
   pixels->setPixelColor(46, pixels->Color(r));
   pixels->setPixelColor(47, pixels->Color(g));

   pixels->setPixelColor(60, pixels->Color(y));
   
   mainLine[5] = 3;
   yardRoad[3] = 5;
   
   break;

   case 6:

   pointRight1[2] = 0;
   pointRight1[3] = 0;
   pointRight1[4] = 0;
   pointRight1[5] = 0;
   pointRight1[6] = 1; sendDataR();
   pointRight2[2] = 0;
   pointRight2[3] = 0;
   pointRight2[4] = 0;
   pointRight2[5] = 0;

   
   yardRight[3] = 1;
   yardLeft[3] = 0;

   interlockRight[2] = 0;  
   interlockRight[5] = 0;

   if (mainLine[5] == 3) { 
     pointRight1[5] = 0;
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));
   }

   

   if (mainLine[6] == 2) { 
   yardRight[2] = 0;   
   pixels->setPixelColor(34, pixels->Color(r)); 
   }

   if (mainLine[6] == 4) { 
   yardRight[4] = 0;   
   pixels->setPixelColor(36, pixels->Color(r)); 
   }

   if (mainLine[6] == 5) {
   pointRight2[0] = 0;
   pointRight2[1] = 0;
   yardRight[5] = 0;
   pixels->setPixelColor(37, pixels->Color(r));
   pixels->setPixelColor(50, pixels->Color(g));
   pixels->setPixelColor(51, pixels->Color(r));
   pixels->setPixelColor(52, pixels->Color(g));     
   }   

   if (mainLine[7] == 2) {
   yardRight[2] = 0;
   pixels->setPixelColor(34, pixels->Color(r));          
   pixels->setPixelColor(62, pixels->Color(r)); 
   }

  if (mainLine[7] == 3) {             
   pixels->setPixelColor(62, pixels->Color(r)); 
   }
   
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(35, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(g));
   pixels->setPixelColor(45, pixels->Color(g));
   pixels->setPixelColor(48, pixels->Color(r));
   pixels->setPixelColor(49, pixels->Color(g));
   
   pixels->setPixelColor(53, pixels->Color(g));
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(56, pixels->Color(g));   
   pixels->setPixelColor(57, pixels->Color(r));
   pixels->setPixelColor(58, pixels->Color(g));

   pixels->setPixelColor(61, pixels->Color(y));

   mainLine[6] = 3;
   yardRoad[3] = 6;
   
   break;
   
   case 7:

   pointRight1[2] = 0;
   pointRight1[3] = 0;
   pointRight1[6] = 0;
   pointRight2[2] = 1; sendDataR();
   pointRight2[3] = 1; sendDataR();
   pointRight2[4] = 0;
   pointRight2[5] = 0;
   
   yardLeft[3] = 0;   
   yardRight[3] = 1;

   interlockRight[2] = 0;
   interlockRight[5] = 1;
   interlockRight[6] = 0;
   
   if (mainLine[6] == 2) {
   pixels->setPixelColor(34, pixels->Color(r));     
   }

   if (mainLine[6] == 2) {
   pixels->setPixelColor(34, pixels->Color(r)); 
   pixels->setPixelColor(61, pixels->Color(r));     
   }
     
     if (mainLine[7] == 2) {
     pixels->setPixelColor(34, pixels->Color(r));     
     }

     if (mainLine[6] == 3) {
     pixels->setPixelColor(62, pixels->Color(r));     
     }

     if (mainLine[6] == 5) {
     pixels->setPixelColor(37, pixels->Color(r));     
     }

     if (mainLine[7] == 5) {
     pixels->setPixelColor(37, pixels->Color(r));     
     }
   
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(35, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(r));
   pixels->setPixelColor(43, pixels->Color(g));
   pixels->setPixelColor(48, pixels->Color(r));
   pixels->setPixelColor(49, pixels->Color(g));
   
   pixels->setPixelColor(53, pixels->Color(r));
   pixels->setPixelColor(54, pixels->Color(g));
   pixels->setPixelColor(55, pixels->Color(r));   
   pixels->setPixelColor(56, pixels->Color(g));   
   pixels->setPixelColor(57, pixels->Color(r));
   pixels->setPixelColor(58, pixels->Color(g));
   
   pixels->setPixelColor(61, pixels->Color(r));
   pixels->setPixelColor(62, pixels->Color(y));

   mainLine[7] = 3;
   yardRoad[3] = 7;
   
   break;

  case 9:
  
   yardLeft[3] = 0;
   yardRight[3] = 0;
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(35, pixels->Color(r));

   yardRoad[3] = 9;
   
   break;  

    }
   }
