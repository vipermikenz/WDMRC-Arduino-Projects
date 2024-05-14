
void yardTrack5 () { 

  switch (track[1]) {

    case 2:

   pointLeft1[2] = 0; 
   pointLeft1[6] = 0;
   pointLeft1[7] = 1;
   pointLeft1[10] = 1; 
   pointLeft1[11] = 1;
   pointLeft1[12] = 1;   
      
   yardLeft[5] = 1;
   yardRight[5] = 0; 

   mainLine [track[5]] = track[0];
   
   pixels->setPixelColor(2, pixels->Color(b)); 
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(5, pixels->Color(g));
   
   pixels->setPixelColor(11, pixels->Color(r));
   pixels->setPixelColor(12, pixels->Color(g));
   pixels->setPixelColor(13, pixels->Color(r));
   pixels->setPixelColor(18, pixels->Color(r));
   pixels->setPixelColor(19, pixels->Color(g));
   
   pixels->setPixelColor(20, pixels->Color(r));
   
   pixels->setPixelColor(32, pixels->Color(b));

   break;

   case 3:

   
   pointLeft1[7] = 0;
   pointLeft2[1] = 0;
   pointLeft2[2] = 0; 
   pointLeft2[3] = 1;
   pointLeft2[5] = 0;   
   pointLeft2[6] = 1;
       
   yardLeft[5] = 1;
   yardRight[5] = 0; 
   
   pixels->setPixelColor(3, pixels->Color(b)); 
   pixels->setPixelColor(8, pixels->Color(g));
   pixels->setPixelColor(9, pixels->Color(r));
   
   pixels->setPixelColor(10, pixels->Color(g));   
   pixels->setPixelColor(11, pixels->Color(r));
   pixels->setPixelColor(12, pixels->Color(g));
   pixels->setPixelColor(13, pixels->Color(r));
   pixels->setPixelColor(18, pixels->Color(r));
   pixels->setPixelColor(19, pixels->Color(g));
   
   pixels->setPixelColor(20, pixels->Color(r));
   
   pixels->setPixelColor(32, pixels->Color(b));

   break;
   
  
   case 4:   
   
   pointLeft2[1] = 0;    
   pointLeft2[3] = 0;   
   pointLeft2[5] = 0;
   pointLeft2[6] = 0;
       
   yardLeft[5] = 1;
   yardRight[5] = 0;
       
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
   
   break;

   case 6:

   pointRight1[6] = 0;
   pointRight1[7] = 1;
   pointRight1[9] = 1;
   pointRight1[10] = 0;
   pointRight1[11] = 1;
   pointRight1[12] = 1;

   yardLeft[5] = 0;
   yardRight[5] = 1; 

   pixels->setPixelColor(5, pixels->Color(b)); 
   
   pixels->setPixelColor(37, pixels->Color(y));
   
   pixels->setPixelColor(50, pixels->Color(r));
   pixels->setPixelColor(51, pixels->Color(g));
   pixels->setPixelColor(52, pixels->Color(r));
   pixels->setPixelColor(53, pixels->Color(g));
   pixels->setPixelColor(54, pixels->Color(r));
   pixels->setPixelColor(55, pixels->Color(g));
   pixels->setPixelColor(56, pixels->Color(r));
   pixels->setPixelColor(57, pixels->Color(r));
   pixels->setPixelColor(58, pixels->Color(g));
   pixels->setPixelColor(59, pixels->Color(r));

   pixels->setPixelColor(61, pixels->Color(y)); 

   break;

   
   case 7:

   pointRight1[6] = 0;
   pointRight1[7] = 0;
   pointRight1[9] = 1;
   pointRight1[10] = 0;
   pointRight1[11] = 0;
   pointRight1[12] = 1;

   yardLeft[5] = 0;
   yardRight[5] = 1; 

   pixels->setPixelColor(31, pixels->Color(r));   
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
   pixels->setPixelColor(59, pixels->Color(g));

   pixels->setPixelColor(62, pixels->Color(y));   
   
   break;

   case 8:

   pointRight1[9] = 0;
   pointRight1[12] = 0;

   yardLeft[5] = 0;
   yardRight[5] = 1;
    
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(37, pixels->Color(y));
   
   pixels->setPixelColor(50, pixels->Color(g));
   pixels->setPixelColor(51, pixels->Color(r));
   pixels->setPixelColor(52, pixels->Color(g));
   pixels->setPixelColor(56, pixels->Color(g));     

   break;
   
   case 9:
  
   yardLeft[5] = 0;
   yardRight[5] = 0;
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(37, pixels->Color(r));
   break;
 }
}
