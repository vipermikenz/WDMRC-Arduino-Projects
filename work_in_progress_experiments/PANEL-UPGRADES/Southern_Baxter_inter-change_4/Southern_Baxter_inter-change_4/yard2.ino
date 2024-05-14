
void yardTrack2 () { 

  switch (track[1]) {

   case 0:

   pointLeft1[0] = 1; 
   pointLeft1[5] = 1;
       
   yardLeft[0] = 0;
   yardLeft[1] = 0; 
   yardLeft[2] = 1;
   yardRight[2] = 0;

   mainLine [track[2]] = track[0];
      
   pixels->setPixelColor(0, pixels->Color(b));
   pixels->setPixelColor(23, pixels->Color(r));
   pixels->setPixelColor(24, pixels->Color(g));
   pixels->setPixelColor(25, pixels->Color(r));
   pixels->setPixelColor(26, pixels->Color(r));
   pixels->setPixelColor(28, pixels->Color(r));
   pixels->setPixelColor(29, pixels->Color(b));
   pixels->setPixelColor(32, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(r));
   
   break;
 
   case 1:
    
   pointLeft1[0] = 0; 
   pointLeft1[2] = 0;
   pointLeft1[3] = 0;
   pointLeft1[4] = 0; 
   pointLeft1[5] = 0;
   pointLeft1[6] = 0;
   pointLeft1[8] = 0; 
    
   yardLeft[2] = 1; 
   yardLeft[3] = 0;
    
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
   
   
   break ;

   case 2:

   pointLeft1[0] = 0; 
   pointLeft1[2] = 1;
   pointLeft1[3] = 0;
   pointLeft1[4] = 0; 
   pointLeft1[5] = 0;
   pointLeft1[6] = 1;
   pointLeft1[8] = 0; 
    
   yardLeft[2] = 1; 
   yardLeft[3] = 0;
   yardLeft[4] = 0;
   yardLeft[5] = 0; 
     
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
      
   pixels->setPixelColor(34, pixels->Color(r));
   pixels->setPixelColor(39, pixels->Color(b));

   break ;

   


    case 5:

   pointRight1[0] = 1;
   pointRight1[1] = 0;
   pointRight1[2] = 1;
   pointRight1[5] = 0;
   yardLeft[2] = 0;
   yardRight[2] = 1;
   
   
   pixels->setPixelColor(29, pixels->Color(r));
    
   pixels->setPixelColor(33, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(y));
   pixels->setPixelColor(38, pixels->Color(r));
   pixels->setPixelColor(39, pixels->Color(g));
   
   pixels->setPixelColor(40, pixels->Color(r));
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));

   pixels->setPixelColor(60, pixels->Color(y));

   break;


   case 6:

   
   pointRight1[0] = 0;
   pointRight1[2] = 0;
   pointRight1[5] = 0;
   pointRight1[6] = 0;
   pointRight1[7] = 0;
   pointRight1[10] = 0;
   pointRight1[11] = 0;
   
   yardLeft[2] = 0;
   yardRight[2] = 1;
   yardRight[3] = 0;
   
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

   break;

   case 7:

   
   pointRight1[0] = 0;
   pointRight1[2] = 0;
   pointRight1[5] = 0;
   pointRight1[6] = 1;
   pointRight1[7] = 0;
   pointRight1[10] = 1;
   pointRight1[11] = 0;
   
   yardLeft[2] = 0;
   yardRight[2] = 1;
   yardRight[3] = 0;
   
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

   pixels->setPixelColor(62, pixels->Color(y));

   break;

   case 9:
  
   yardLeft[2] = 0;
   yardRight[2] = 0;
   pixels->setPixelColor(29, pixels->Color(r));
   pixels->setPixelColor(34, pixels->Color(r));
   break;
    
   
 }
}
