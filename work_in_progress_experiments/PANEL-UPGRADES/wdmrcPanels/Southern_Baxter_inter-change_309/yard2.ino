
void yardTrack2() { 
   //set up imputs for yard 2.

  switch (track[1]) {

   case 0:

   pointLeft2[4] = 1; sendDataL(); 
   pointLeft2[5] = 1; sendDataL();
       
   yardLeft[0] = 0;
   yardLeft[1] = 0; 
   yardLeft[2] = 1;
   yardRight[2] = 0;
   
   interlockLeft[6] = 1; 
      
   pixels->setPixelColor(0, pixels->Color(b));
   pixels->setPixelColor(23, pixels->Color(r));
   pixels->setPixelColor(24, pixels->Color(g));
   pixels->setPixelColor(25, pixels->Color(r)); 
   pixels->setPixelColor(26, pixels->Color(r));    
   pixels->setPixelColor(28, pixels->Color(r));
   pixels->setPixelColor(29, pixels->Color(b));
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(r));

   mainLine[0] = 2;
   yardRoad[2] = 0;
   
   break;
 
   case 1:
    
   pointLeft1[0] = 0; 
   pointLeft1[1] = 0;
   pointLeft1[6] = 0;
   pointLeft1[7] = 0; 
   pointLeft2[2] = 0;
   pointLeft2[4] = 0;
   pointLeft2[5] = 0; 
    
   yardLeft[2] = 1; 
   yardRight[2] = 0;
   
   interlockLeft[6] = 0;
   interlockLeft[1] = 0;

  if (yardRoad[2] == 0) {    
   pixels->setPixelColor(0, pixels->Color(r)); 
   }

   if (yardRoad[2] == 2) {      
     pixels->setPixelColor(2, pixels->Color(r));
     }

   if (mainLine[1] == 4) {
    yardLeft[4] = 0;
   }
   if (yardRoad[2] == 1) {
   yardLeft[2] = 0;
   pixels->setPixelColor(31, pixels->Color(r));     
     }    
 
   pixels->setPixelColor(1, pixels->Color(b));
   pixels->setPixelColor(5, pixels->Color(g)); 
   pixels->setPixelColor(6, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
   
   pixels->setPixelColor(14, pixels->Color(g));
   pixels->setPixelColor(15, pixels->Color(r));
   pixels->setPixelColor(16, pixels->Color(g));
   
   pixels->setPixelColor(21, pixels->Color(g));
   pixels->setPixelColor(22, pixels->Color(r));
   pixels->setPixelColor(23, pixels->Color(g));
   pixels->setPixelColor(24, pixels->Color(r));   
   pixels->setPixelColor(25, pixels->Color(g));
   pixels->setPixelColor(28, pixels->Color(r));
   pixels->setPixelColor(29, pixels->Color(b));

   pixels->setPixelColor(30, pixels->Color(r));   
   pixels->setPixelColor(34, pixels->Color(r));
   
   mainLine[1] = 2;
   yardRoad[2] = 1;
   
   break ;

   case 2:

   pointLeft1[0] = 1; sendDataL();
   pointLeft1[1] = 1; sendDataL();
   pointLeft1[6] = 0;
   pointLeft1[7] = 0; 
   pointLeft2[2] = 0;
   pointLeft2[4] = 0;
   pointLeft2[5] = 0; 
    
   yardLeft[2] = 1; 
   yardLeft[3] = 0;
   yardRight[2] = 0;
   
   interlockLeft[1] = 1;
   interlockLeft[6] = 0;
   
   if (mainLine[2] == 5) {
    yardLeft[5] = 0;
    pixels->setPixelColor(32, pixels->Color(r));
   }
   
   if (mainLine[5] == 3) { 
    yardLeft[3] = 0;   
   pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[5] == 4) {
   yardLeft[4] = 0;
   pixels->setPixelColor(36, pixels->Color(r)); 
   }   
   
   pixels->setPixelColor(1, pixels->Color(r));  
   pixels->setPixelColor(2, pixels->Color(b));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(6, pixels->Color(g));
   pixels->setPixelColor(7, pixels->Color(r));
   
   pixels->setPixelColor(14, pixels->Color(g));
   pixels->setPixelColor(15, pixels->Color(r));
   pixels->setPixelColor(16, pixels->Color(g));
   
   pixels->setPixelColor(21, pixels->Color(g));
   pixels->setPixelColor(22, pixels->Color(r));
   pixels->setPixelColor(23, pixels->Color(g));
   pixels->setPixelColor(24, pixels->Color(r));   
   pixels->setPixelColor(25, pixels->Color(g));
   pixels->setPixelColor(28, pixels->Color(r));
   pixels->setPixelColor(29, pixels->Color(b)); 
   
   pixels->setPixelColor(30, pixels->Color(r));     
   pixels->setPixelColor(33, pixels->Color(r)); 
  
   mainLine[2] = 2;
   yardRoad[2] = 2;
   
   break ;

   case 5:

   pointRight1[0] = 1;  sendDataR();
   pointRight1[1] = 1;  sendDataR();
   pointRight1[2] = 0;
   pointRight1[3] = 0;
   pointRight1[5] = 0;
   
   yardRight[1] = 0;
   yardLeft[2] = 0;
   yardRight[2] = 1;

   interlockRight[1] = 1;

   

   if (mainLine[5] == 2) {
    yardRight[2] = 0;
    pixels->setPixelColor(34, pixels->Color(r));      
   }

   if (mainLine[5] == 3) {
    yardRight[3] = 0;
    pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[5] == 4) {
    yardRight[4] = 0;
    pixels->setPixelColor(36, pixels->Color(r)); 
   }

    if (mainLine[6] == 2) {           
   pixels->setPixelColor(61, pixels->Color(r)); 
   }

   
   if (mainLine[7] == 2) {          
   pixels->setPixelColor(62, pixels->Color(r)); 
   }
   
   
   pixels->setPixelColor(29, pixels->Color(r));
    
   pixels->setPixelColor(33, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(y));
   pixels->setPixelColor(38, pixels->Color(r));
   pixels->setPixelColor(39, pixels->Color(g));
   
   pixels->setPixelColor(40, pixels->Color(r));
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));

   pixels->setPixelColor(60, pixels->Color(y));

   mainLine[5] = 2;
   yardRoad[2] = 5;
    
   break;

   case 6:
   
   pointRight1[0] = 0;
   pointRight1[1] = 0;
   pointRight1[6] = 0;
   pointRight2[2] = 0;
   pointRight2[3] = 0;
   pointRight2[4] = 0;
   pointRight1[5] = 0;
   
   yardLeft[2] = 0;
   yardRight[2] = 1;

   interlockRight[1] = 0;
   interlockRight[5] = 0;
   interlockRight[6] = 0;
 
   if (mainLine[5] == 2) {          
   pixels->setPixelColor(60, pixels->Color(r)); 
   }

  
   
   if (mainLine[6] == 3) {
    yardRight[3] = 0;       
   pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[6] == 4) { 
    yardRight[4] = 0;      
   pixels->setPixelColor(36, pixels->Color(r)); 
   }

   if (mainLine[6] == 5) { 
   yardRight[5] = 0;    
   pixels->setPixelColor(37, pixels->Color(r)); 
   }

  if (mainLine[7] == 2) {          
   pixels->setPixelColor(62, pixels->Color(r)); 
   }

   if (mainLine[7] == 3) { 
   yardRight[3] = 0;    
   pixels->setPixelColor(35, pixels->Color(r));
   pixels->setPixelColor(61, pixels->Color(r));
    
   }
   
   pixels->setPixelColor(29, pixels->Color(r));
      
   pixels->setPixelColor(34, pixels->Color(y));
   pixels->setPixelColor(35, pixels->Color(r));   
   pixels->setPixelColor(38, pixels->Color(g));
   pixels->setPixelColor(39, pixels->Color(r));
      
   pixels->setPixelColor(40, pixels->Color(g));
   pixels->setPixelColor(48, pixels->Color(g));
   pixels->setPixelColor(49, pixels->Color(r));
   
   pixels->setPixelColor(53, pixels->Color(g));   
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(57, pixels->Color(g));  
   pixels->setPixelColor(58, pixels->Color(r));
   pixels->setPixelColor(59, pixels->Color(g));
   
   pixels->setPixelColor(61, pixels->Color(y));

   mainLine[6] = 2;
   yardRoad[2] = 6;
   
   break;

   case 7:
   
   pointRight1[0] = 0;
   pointRight1[1] = 0;
   pointRight1[6] = 1; sendDataR();
   pointRight2[2] = 1; sendDataR();
   pointRight2[3] = 1; sendDataR();
   pointRight2[4] = 0;
   pointRight1[5] = 0;
   
   
   yardLeft[2] = 0;
   yardRight[2] = 1;
   yardRight[3] = 0;

   interlockRight[1] = 0;
   interlockRight[5] = 1;
   interlockRight[6] = 0;

   
   if (mainLine[5] == 2) {          
   pixels->setPixelColor(60, pixels->Color(r)); 
   }

   if (mainLine[7] == 2) {            
   pixels->setPixelColor(61, pixels->Color(r)); 
   }

   if (mainLine[7] == 3) {
   yardRight[3] = 0;         
   pixels->setPixelColor(35, pixels->Color(r)); 
   }

   if (mainLine[7] == 4) { 
   yardRight[4] = 0;   
   pixels->setPixelColor(36, pixels->Color(r)); 
   }

   if (mainLine[7] == 5) { 
   yardRight[5] = 0;   
   pixels->setPixelColor(37, pixels->Color(r));   
   }

   if (mainLine[7] == 2) {
   yardRight[3] = 0;         
   pixels->setPixelColor(62, pixels->Color(r)); 
   }

   if (mainLine[8] == 2) {
   yardRight[3] = 0;         
   pixels->setPixelColor(62, pixels->Color(r)); 
   }
        
   pixels->setPixelColor(29, pixels->Color(r));
      
   pixels->setPixelColor(34, pixels->Color(r));
   pixels->setPixelColor(39, pixels->Color(b));
   pixels->setPixelColor(34, pixels->Color(y));
   pixels->setPixelColor(35, pixels->Color(r));
   pixels->setPixelColor(38, pixels->Color(g));
   pixels->setPixelColor(39, pixels->Color(r));
   
   pixels->setPixelColor(40, pixels->Color(g));
   pixels->setPixelColor(48, pixels->Color(g));
   pixels->setPixelColor(49, pixels->Color(r));
   
   pixels->setPixelColor(53, pixels->Color(r));
   pixels->setPixelColor(54, pixels->Color(g));
   pixels->setPixelColor(55, pixels->Color(r));   
   pixels->setPixelColor(57, pixels->Color(g));
   pixels->setPixelColor(58, pixels->Color(r));
   pixels->setPixelColor(59, pixels->Color(g));

   pixels->setPixelColor(61, pixels->Color(r));
   pixels->setPixelColor(62, pixels->Color(y));
   
   mainLine[7] = 2;
   yardRoad[2] = 7;
   
   break;

   case 9:
  
   yardLeft[2] = 0;
   yardRight[2] = 0;
   
   pixels->setPixelColor(29, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(r));

   yardRoad[2] = 9;
   
   break;
    }
   } 
 

  
