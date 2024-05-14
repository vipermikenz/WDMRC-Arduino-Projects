void yard2() {

  
  int t = track[1];
  switch (t) {

  case 0:


  pointLeft1[0] = 1;
  pointLeft1[1] = 1;
  pointLeft1[2] = 0;
  pointLeft1[3] = 0;
  pointLeft1[4] = 0;
  pointLeft1[5] = 0;



   pixels->setPixelColor(0, pixels->Color(b));   
   pixels->setPixelColor(3, pixels->Color(r));
   pixels->setPixelColor(4, pixels->Color(g));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
   pixels->setPixelColor(8, pixels->Color(r));
   pixels->setPixelColor(9, pixels->Color(g));

   pixels->setPixelColor(10, pixels->Color(g));   
   pixels->setPixelColor(11, pixels->Color(r));
   pixels->setPixelColor(12, pixels->Color(g)); 

   pixels->setPixelColor(29, pixels->Color(g));   
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(31, pixels->Color(g)); 

  }
  {
 case 1:

  pointLeft1[0] = 0;
  pointLeft1[1] = 0;
  pointLeft1[2] = 0;
  pointLeft1[3] = 0;
  pointLeft1[4] = 0;
  pointLeft1[5] = 0;


   pixels->setPixelColor(1, pixels->Color(b));   
   pixels->setPixelColor(3, pixels->Color(g));
   pixels->setPixelColor(4, pixels->Color(r));
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(7, pixels->Color(g));
   pixels->setPixelColor(8, pixels->Color(r));
   pixels->setPixelColor(9, pixels->Color(g));

   pixels->setPixelColor(10, pixels->Color(g));   
   pixels->setPixelColor(11, pixels->Color(r));
   pixels->setPixelColor(12, pixels->Color(g)); 

   pixels->setPixelColor(29, pixels->Color(g));   
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(31, pixels->Color(g)); 

  }
  {

  case 3:

  pointRight1[3] = 0;
  pointRight1[4] = 0;
  pointRight2[4] = 0;
  pointRight2[5] = 0;
  pointRight2[7] = 0;

   pixels->setPixelColor(58, pixels->Color(g));   
   pixels->setPixelColor(59, pixels->Color(r));
   pixels->setPixelColor(60, pixels->Color(g));
   pixels->setPixelColor(63, pixels->Color(g));
   pixels->setPixelColor(64, pixels->Color(r));
   pixels->setPixelColor(65, pixels->Color(y));
  }
  }

}
