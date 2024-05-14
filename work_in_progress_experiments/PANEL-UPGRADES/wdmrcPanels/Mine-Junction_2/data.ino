 
  void setUpData() {
     
      switch (buttonNumber) {

      case 0:
     buttonSetting[0] = !buttonSetting[0]; //West end front yard entry/exit
       if ((buttonSetting[0]) == 0){
       buttonSetting[2] = 0;
       
       pixels->setPixelColor(0, pixels->Color(g));
       pixels->setPixelColor(1, pixels->Color(r));
       pixels->setPixelColor(3, pixels->Color(r));
        
       }
       else {
       buttonSetting[1] = 0;
       
       pixels->setPixelColor(0, pixels->Color(r));
       pixels->setPixelColor(1, pixels->Color(g));
       pixels->setPixelColor(2, pixels->Color(r));             
       }
       break;
       
       case 1:
       buttonSetting[1] = !buttonSetting[1];
       if ((buttonSetting[1]) == 0){
       buttonSetting[2] = 0;      
       pixels->setPixelColor(2, pixels->Color(r));
      }
       else if ((buttonSetting[0]) == 1) {  
       buttonSetting[1] = 0;
       }
       else if ((buttonSetting[0]) == 0) {  
       buttonSetting[2] = 0;
       buttonSetting[3] = 0;              
       pixels->setPixelColor(2, pixels->Color(b));      
       }
       break;

       case 2:
       
       buttonSetting[2] = !buttonSetting[2];
       if ((buttonSetting[2]) == 0){
       buttonSetting[1] = 0;       
       pixels->setPixelColor(3, pixels->Color(r));
      }
       else if ((buttonSetting[0]) == 0) {  
       buttonSetting[2] = 0;
       }
       else if ((buttonSetting[0]) == 1) {  
       buttonSetting[1] = 0;
       buttonSetting[4] = 0;              
       pixels->setPixelColor(3, pixels->Color(b));       
       }
       break;
       
     case 3: 
       
      buttonSetting[3] = !buttonSetting[3];
       if ((buttonSetting[3]) == 0){
      pixels->setPixelColor(2, pixels->Color(r));
      }
        else if (((buttonSetting[5]) == 0) && ((buttonSetting[6]) == 1)) {  
       buttonSetting[3] = 0;
       pixels->setPixelColor(2, pixels->Color(r));
       
       }       
       else if (((buttonSetting[5]) == 0) &&  ((buttonSetting[6]) == 0)){
       buttonSetting[1] = 0;        
       pixels->setPixelColor(2, pixels->Color(y));
       }
       
       else if (((buttonSetting[5]) == 1) &&  ((buttonSetting[6]) == 0)){
        buttonSetting[1] = 0;
       pixels->setPixelColor(2, pixels->Color(g));       
       }
       else if (((buttonSetting[5]) == 1) &&  ((buttonSetting[6]) == 1)){
        buttonSetting[1] = 0;
       pixels->setPixelColor(2, pixels->Color(y));       
       }
       break;
       
    case 4: 
      buttonSetting[4] = !buttonSetting[4];
       if ((buttonSetting[4]) == 0){
      pixels->setPixelColor(3, pixels->Color(r));
      }
      else if ((buttonSetting[5]) == 1){  
       buttonSetting[4] = 0;
       pixels->setPixelColor(3, pixels->Color(r));
       }       
       else if ((buttonSetting[6]) == 0){ 
       buttonSetting[2] = 0;       
       pixels->setPixelColor(3, pixels->Color(g));
       }
       else if ((buttonSetting[6]) == 1){
       buttonSetting[2] = 0;
       pixels->setPixelColor(3, pixels->Color(y));       
       }
       
       break;
       
      case 5: 
      buttonSetting[5] = !buttonSetting[5];
      if ((buttonSetting[5]) == 0){
      pixels->setPixelColor(4, pixels->Color(g));
      pixels->setPixelColor(5, pixels->Color(r));
      pixels->setPixelColor(6, pixels->Color(g));
      }      
      else {         
      buttonSetting[4] = 0;
      pixels->setPixelColor(3, pixels->Color(r));
      pixels->setPixelColor(4, pixels->Color(r));
      pixels->setPixelColor(5, pixels->Color(g));
      pixels->setPixelColor(6, pixels->Color(r));
       }
       break;
       
      case 6:
       buttonSetting[6] = !buttonSetting[6];
       if ((buttonSetting[6]) == 0){
       buttonSetting[7] = 0;         
       pixels->setPixelColor(3, pixels->Color(r));  
       pixels->setPixelColor(7, pixels->Color(g));
       pixels->setPixelColor(8, pixels->Color(r));
       pixels->setPixelColor(9, pixels->Color(r));
       }
       else {
       buttonSetting[3] = 0;      
       pixels->setPixelColor(7, pixels->Color(r));
       pixels->setPixelColor(8, pixels->Color(g));
       pixels->setPixelColor(9, pixels->Color(r));
       }
       break;

      case 7:
       buttonSetting[7] = !buttonSetting[7];
       if (((buttonSetting[7]) == 1) && ((buttonSetting[6]) == 0)){
       pixels->setPixelColor(9, pixels->Color(g));
       }      
       else {       
       buttonSetting[7] = 0;         

       pixels->setPixelColor(9, pixels->Color(r));        
       }
       break;
       }
      }
