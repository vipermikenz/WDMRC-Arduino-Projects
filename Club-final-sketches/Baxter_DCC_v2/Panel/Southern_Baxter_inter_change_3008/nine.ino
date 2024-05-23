
   void nine() {//deselect.
   
     switch (track[1]) {

  case 0:    

   yardLeft[0] = 0;
   yardLeft[1] = 0;    

   if (mainLine[0] = 1) {
   yardLeft[2] = 0;
   pixels->setPixelColor(29, pixels->Color(r));      
    }
    
   pixels->setPixelColor(0, pixels->Color(r));
   pixels->setPixelColor(26, pixels->Color(r));       
   pixels->setPixelColor(28, pixels->Color(r));
    
   yardRoad[0] = 9;

   yardRoad[1] = 9;
   mainLine[0] = 9;      
  
    break;
    
   case 1:
        
     if (mainLine[1] == 2) {
     yardLeft[2] = 0;
           
     pixels->setPixelColor(1, pixels->Color(r)); 
     pixels->setPixelColor(29, pixels->Color(r));
     
     yardRoad[2] = 9;
     mainLine[1] = 9; 
     }

     if (mainLine[1] == 3) {
     yardLeft[3] = 0;
           
     pixels->setPixelColor(1, pixels->Color(r)); 
     pixels->setPixelColor(30, pixels->Color(r));
     
     yardRoad[3] = 9;
     mainLine[1] = 9; 
     }
     
     if (mainLine[1] == 4) {
     yardLeft[4] = 0;
           
     pixels->setPixelColor(1, pixels->Color(r)); 
     pixels->setPixelColor(31, pixels->Color(r));
     
     yardRoad[4] = 9;
     mainLine[1] = 9; 
     }

     break;

    case 2:
   
   if (mainLine[2] == 2) {
     yardLeft[2] = 0;
     
    pixels->setPixelColor(2, pixels->Color(r));
    pixels->setPixelColor(29, pixels->Color(r));
     
    yardRoad[2] = 9;
    mainLine[2] = 9;     
   }
        
   if (mainLine[2] == 3) {
    yardLeft[3] = 0;
      
     pixels->setPixelColor(2, pixels->Color(r));
     pixels->setPixelColor(30, pixels->Color(r));

     yardRoad[2] = 9;
     mainLine[3] = 9;
     }

   if (mainLine[2] == 4) {

    yardLeft[4] = 0;

     pixels->setPixelColor(2, pixels->Color(r));
     pixels->setPixelColor(31, pixels->Color(r));

     yardRoad[2] = 9;
     mainLine[4] = 9;
     }     

   if (mainLine[2] == 5) {
     yardLeft[5] = 0;
        
     pixels->setPixelColor(2, pixels->Color(r));   
     pixels->setPixelColor(32, pixels->Color(r));

     yardRoad[2] = 9;
     mainLine[5] = 9;
     }

      
    break;

    case 3:    
     
   if (mainLine[3] == 4) {
     yardLeft[4] = 0;
      
     pixels->setPixelColor(3, pixels->Color(r)); 
     pixels->setPixelColor(31, pixels->Color(r));

     yardRoad[3] = 9;
     mainLine[4] = 9;
     }

   if (mainLine[3] == 5) {
     yardLeft[5] = 0;
      
     pixels->setPixelColor(3, pixels->Color(r)); 
     pixels->setPixelColor(32, pixels->Color(r));

     yardRoad[3] = 9;
     mainLine[4] = 9;
     }     
    break;

   case 4:
   
    pixels->setPixelColor(4, pixels->Color(r)); 

   if (mainLine[4] == 4) {
     yardLeft[4] = 0;
      
     

     }
   if (mainLine[4] == 5) {
     pixels->setPixelColor(4, pixels->Color(r));
     pixels->setPixelColor(31, pixels->Color(r));

     yardRoad[5] = 9;
     mainLine[4] = 9;
     }     

    break;

  case 5:    
    
   if (mainLine[5] == 1) {

     yardRight[1] = 0;

     pixels->setPixelColor(33, pixels->Color(r)); 
     pixels->setPixelColor(60, pixels->Color(r)); 
     
     yardRoad[1] = 9;
     mainLine[5] = 9;
     }

   if (mainLine[5] == 2) {

     yardRight[2] = 0;
     pixels->setPixelColor(34, pixels->Color(r)); 
     pixels->setPixelColor(60, pixels->Color(r));

     yardRoad[2] = 9;
     mainLine[5] = 9;
     }     

   if (mainLine[5] == 3) {

     yardRight[3] = 0;
        
     pixels->setPixelColor(35, pixels->Color(r));   
     pixels->setPixelColor(60, pixels->Color(r));

     yardRoad[3] = 9;
     mainLine[5] = 9;
     }

   if (mainLine[5] == 4) {

     yardRight[4] = 0;

     pixels->setPixelColor(36, pixels->Color(r));
     pixels->setPixelColor(60, pixels->Color(r));     
     }     
    break;

    case 6:     

    if (mainLine[6] == 2) {

     yardRight[2] = 0;
     
     pixels->setPixelColor(34, pixels->Color(r)); 
     pixels->setPixelColor(61, pixels->Color(r));

     yardRoad[2] = 9;
     mainLine[6] = 9;
      }

    if (mainLine[6] == 3) {
     yardRight[3] = 0;

     pixels->setPixelColor(35, pixels->Color(r));
     pixels->setPixelColor(61, pixels->Color(r));

     yardRoad[3] = 9;
     mainLine[6] = 9;
      }     

    if (mainLine[6] == 4) {
     yardRight[4] = 0;
        
     pixels->setPixelColor(36, pixels->Color(r));
     pixels->setPixelColor(61, pixels->Color(r));

     yardRoad[4] = 9;
     mainLine[6] = 9;
     }

    if (mainLine[6] == 5) {
     yardRight[5] = 0;
      
     pixels->setPixelColor(37, pixels->Color(r));
     pixels->setPixelColor(61, pixels->Color(r));

     yardRoad[5] = 9;
     mainLine[6] = 9;
     }     
    break;
    
     case 7:      
  
   if (mainLine[7] == 2) {

     yardRight[2] = 0;

     pixels->setPixelColor(34, pixels->Color(r)); 
     pixels->setPixelColor(62, pixels->Color(r));

     yardRoad[2] = 9;
     mainLine[7] = 9;
     }

   if (mainLine[7] == 3) {
     yardRight[3] = 0;

     pixels->setPixelColor(35, pixels->Color(r));
     pixels->setPixelColor(62, pixels->Color(r));

     yardRoad[3] = 9;
     mainLine[7] = 9;
     }     

   if (mainLine[7] == 4) {
     yardRight[4] = 0;
        
     pixels->setPixelColor(36, pixels->Color(r));
     pixels->setPixelColor(62, pixels->Color(r));

     yardRoad[4] = 9;
     mainLine[7] = 9;
     }

   if (mainLine[7] == 5) {
     yardRight[5] = 0;
      
     pixels->setPixelColor(37, pixels->Color(r));
     pixels->setPixelColor(62, pixels->Color(r));

     yardRoad[5] = 9;
     mainLine[7] = 9;
     }     
    break;


   pixels->show();
    }
   }
