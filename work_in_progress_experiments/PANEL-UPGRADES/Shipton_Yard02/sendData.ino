
   void sendData() {  // All points and relays.
     
    byte pointL1 = 0b11111111;
    byte pointL2 = 0b11111111;
    byte pointR1 = 0b11111111;
    byte pointR2 = 0b11111111;
    byte pointM = 0b11111111;
  
    byte trackL = 0b11111111;
    byte yards = 0b11111111;
       int a = 0;
       int j = 0;       
   
    for (j = 0; j < 8;) { // convert bools to bytes and invert.
        a =  pointLeft1[j];
        bitWrite(pointL1,j,!a);      
        a =  pointLeft2[j];
        bitWrite(pointL2,j,!a);       
        a =  pointRight1[j];
        bitWrite(pointR1,j,!a);     
        a =  pointRight2[j];
        bitWrite(pointR2,j,!a);   
        a =  yardLoops[j];
        bitWrite(yardLoops(yards,j,!a);
       
        j++;
        }            
       {  // transmit data.         
        
       Wire.beginTransmission(0x20);   //Left points.         
       Wire.write(pointL1);
       Wire.write(pointL2);
       Wire.endTransmission();        

       Wire.beginTransmission(0x22);   //Left track power.         
       Wire.write(yards);       
       Wire.endTransmission(); 

       Wire.beginTransmission(0x26);   //Right track power.         
       Wire.write(powerR);
       Wire.write(trackR);
       Wire.endTransmission(); 
     
        }     
       }

      //=====================================================
       void sendDataL() {  // Points left.
     
       int a = 0;
       int j = 0;       
   
       for (j = 0; j < 8;) { // convert bools to bytes and invert.
        a =  pointLeft1[j];
        bitWrite(pointL1,j,!a);      
        a =  pointLeft2[j];
        bitWrite(pointL2,j,!a);       
      j++;
        }
       {   
       Wire.beginTransmission(0x20);   //Left points.         
       Wire.write(pointL1);
       Wire.write(pointL2);
       Wire.endTransmission(); 

        delay(500);
        }    
      }
     //===========================================================
       void sendDataR() {  //Points right
     
       int a = 0;
       int j = 0;       
   
       for (j = 0; j < 8;) { // convert bools to bytes and invert. 
        a =  pointRight1[j]; er
        bitWrite(pointR1,j,!a);     
        a =  pointRight2[j];
        bitWrite(pointR2,j,!a); 
        j++;
        }
       { 
       Wire.beginTransmission(0x26 );   //Right points         
       Wire.write(pointR1);
       Wire.write(pointR2);
       Wire.endTransmission();

        delay(500);
        }      
        }
     //=======================================================END*/
