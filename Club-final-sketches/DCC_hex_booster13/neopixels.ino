
  void iniNeo() {  


   pixels->setPixelColor(0, pixels->Color(r));
   pixels->setPixelColor(1, pixels->Color(g));
   pixels->setPixelColor(2, pixels->Color(g));
   pixels->setPixelColor(3, pixels->Color(g));
   pixels->setPixelColor(4, pixels->Color(g));
   pixels->setPixelColor(5, pixels->Color(g));  
   pixels->setPixelColor(6, pixels->Color(g));  

   pixels->show();   // Send the initial pixel colors to the panel.
  }