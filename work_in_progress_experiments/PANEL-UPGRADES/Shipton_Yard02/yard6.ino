void yard6() {

  int t = track[1];
  switch (t) {

  case 0:

  pointLeft1[0] = 1;
  pointLeft1[1] = 1;
  pointLeft1[2] = 1;
  pointLeft1[3] = 1;
  pointLeft2[0] = 1;
  pointLeft2[1] = 0;


  
   pixels->setPixelColor(1, pixels->Color(b));   
   pixels->setPixelColor(3, pixels->Color(r));
   pixels->setPixelColor(4, pixels->Color(g));
   pixels->setPixelColor(5, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(r));
   pixels->setPixelColor(8, pixels->Color(g));
   
   pixels->setPixelColor(13, pixels->Color(r));
   pixels->setPixelColor(14, pixels->Color(g));
   pixels->setPixelColor(17, pixels->Color(r));
   pixels->setPixelColor(18, pixels->Color(g));

  }

  case 1:

   pointLeft1[0] = 0;
  pointLeft1[1] = 0;
  pointLeft1[2] = 1;
  pointLeft1[3] = 1;
  pointLeft2[0] = 1;
  pointLeft2[1] = 0;


  pixels->setPixelColor(0, pixels->Color(b));   
  pixels->setPixelColor(3, pixels->Color(g));
  pixels->setPixelColor(4, pixels->Color(r));
  pixels->setPixelColor(5, pixels->Color(g));
  pixels->setPixelColor(7, pixels->Color(r));
  pixels->setPixelColor(8, pixels->Color(g));
  pixels->setPixelColor(9, pixels->Color(r));

  pixels->setPixelColor(13, pixels->Color(r));
  pixels->setPixelColor(14, pixels->Color(g));
  pixels->setPixelColor(17, pixels->Color(r));
  pixels->setPixelColor(18, pixels->Color(g));

  }
  {
    case 2:
  pointLeft1[2] = 0;
  pointLeft1[3] = 0;
  pointLeft1[6] = 1;
  pointLeft1[7] = 0;


  pixels->setPixelColor(7, pixels->Color(g));
  pixels->setPixelColor(8, pixels->Color(r));
  pixels->setPixelColor(9, pixels->Color(g));
  
  pixels->setPixelColor(13, pixels->Color(r));
  pixels->setPixelColor(14, pixels->Color(g));
  pixels->setPixelColor(17, pixels->Color(r));
  pixels->setPixelColor(18, pixels->Color(g));
  }
  {
  case 3:

  pointRight2[0] = 0;
  pointRight2[1] = 0;
  pointRight2[2] = 0;
  pointRight2[3] = 0;
  pointRight2[4] = 1;
  pointRight2[5] = 1;
  pointRight2[7] = 0;

  }
  {

  case 4:

  pointRight2[0] = 0;
  pointRight2[1] = 0;
  pointRight2[2] = 0;
  pointRight2[3] = 0;
  pointRight2[4] = 0;
  pointRight2[5] = 0;
  

  }
  }
  
}
