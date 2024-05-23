
   void sendData() {   
  
       
       int j = 0;
       byte junctionData = 0b11111111;
       
   
     for (j = 0; j < 8; j++) { // convert bool to binary and invert.
        int a = buttonSetting[j];
        bitWrite(junctionData,j,!a); 
       }
   
       {  
       Wire.beginTransmission(0x20);            
       Wire.write(junctionData);       
       Wire.endTransmission();                        
        }     
       }
