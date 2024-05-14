
void yardTrack4 () {

  switch (track[1]) {


  case 1:

   pointLeft1[2] = 0; 
   pointLeft1[3] = 1;
   pointLeft1[6] = 0;
   pointLeft1[8] = 1; 
   pointLeft1[12] = 1;
   
   yardLeft[4] = 1;
   yardLeft[3] = 0;
   yardRight[4] = 0; 
  
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

  break;

  
  case 2:

   pointLeft1[2] = 0; 
   pointLeft1[3] = 1;
   pointLeft1[6] = 0;
   pointLeft2[0] = 1; 
   pointLeft2[5] = 1;
   
   yardLeft[4] = 1;
   yardRight[4] = 0; 
  
   pixels->setPixelColor(2, pixels->Color(b));
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(6, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
   
   pixels->setPixelColor(11, pixels->Color(g));
   pixels->setPixelColor(12, pixels->Color(r));
   pixels->setPixelColor(13, pixels->Color(r));
   pixels->setPixelColor(17, pixels->Color(g));
   pixels->setPixelColor(18, pixels->Color(r));
   
   pixels->setPixelColor(31, pixels->Color(b));
   pixels->setPixelColor(36, pixels->Color(r));

  break;

   
  case 3:

   pointLeft1[2] = 0; 
   pointLeft1[3] = 0;
   pointLeft2[1] = 0;
   pointLeft1[1] = 1; 
   pointLeft1[12] = 1;
   pointLeft1[1] = 1; 
   pointLeft1[12] = 1;
   
   yardLeft[4] = 1;
   yardRight[4] = 0; 
  
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
   
  break;


   
  case 4:

   pointLeft1[2] = 0; 
   pointLeft1[3] = 0;
   pointLeft2[1] = 0;
   pointLeft1[1] = 1; 
   pointLeft2[4] = 1;
   pointLeft1[1] = 1; 
   pointLeft1[12] = 1;
   
   yardLeft[4] = 1;
   yardLeft[5] = 0;
   yardRight[4] = 0; 
  
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
   
  break;



  case 5:


   pointRight1[8] = 1;
   pointRight1[3] = 0;
   pointRight1[4] = 0;
   pointRight1[1] = 1;
         
   yardLeft[4] = 0;
   yardRight[1] = 0;
   yardRight[4] = 1;    
   
    
   pixels->setPixelColor(31, pixels->Color(r));
   pixels->setPixelColor(33, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(y));
   
   pixels->setPixelColor(41, pixels->Color(g));
   pixels->setPixelColor(42, pixels->Color(g));
   pixels->setPixelColor(43, pixels->Color(r));
   pixels->setPixelColor(44, pixels->Color(g));
   pixels->setPixelColor(45, pixels->Color(g));
   pixels->setPixelColor(46, pixels->Color(r));   
   pixels->setPixelColor(47, pixels->Color(g));

   pixels->setPixelColor(60, pixels->Color(y)); 

   break;

 
  case 6:

   pointRight1[6] = 0;
   pointRight1[7] = 1;
   pointRight1[8] = 0;
   pointRight1[9] = 0;
   pointRight1[10] = 0;
   pointRight1[11] = 1;
   pointRight1[12] = 0;
         
   yardLeft[4] = 0;
   yardRight[4] = 1;
    
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
   
   break;  


   
  case 7:

   pointRight1[6] = 0;
   pointRight1[7] = 0;
   pointRight1[8] = 0;
   pointRight1[9] = 0;
   pointRight1[10] = 0;
   pointRight1[11] = 0;
   pointRight1[12] = 0;
         
   yardLeft[4] = 0;
   yardRight[4] = 1;

    mainLine [track[4]] = track[0];
    
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

   pixels->setPixelColor(62, pixels->Color(y)); 
   break; 

    case 9:
  
   yardLeft[4] = 0;
   yardRight[4] = 0;
   pixels->setPixelColor(31, pixels->Color(r));
   pixels->setPixelColor(36, pixels->Color(r));
   break;
  }  
 }
