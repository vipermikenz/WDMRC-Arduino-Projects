

void iniNeo(){ 
  
   pixels->setPixelColor(0, pixels->Color(g));
   pixels->setPixelColor(1, pixels->Color(r));
   pixels->setPixelColor(2, pixels->Color(r));
   pixels->setPixelColor(3, pixels->Color(r));
   pixels->setPixelColor(4, pixels->Color(g));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(6, pixels->Color(g));
   pixels->setPixelColor(7, pixels->Color(g));
   pixels->setPixelColor(8, pixels->Color(r));
   pixels->setPixelColor(9, pixels->Color(r));
   
   pixels->show();   // Send the initial pixel colors to the panel.
    
  }
