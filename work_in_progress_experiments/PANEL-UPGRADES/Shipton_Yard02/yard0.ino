void yard0() {


  int t = track[1];
  switch (t) {

  case 0:

  pointLeft1[0] = 0;
  pointLeft1[1] = 0;
  pointLeft1[4] = 0;
  pointLeft1[5] = 0;
  pointLeft1[6] = 0;
  pointLeft1[7] = 0;
  pointRight1[5] = 1;
  pointRight1[6] = 1;
  pointRight1[7] = 1;

   pixels->setPixelColor(1, pixels->Color(b));
   pixels->setPixelColor(3, pixels->Color(g));
   pixels->setPixelColor(4, pixels->Color(r));
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(10, pixels->Color(g));
   pixels->setPixelColor(11, pixels->Color(r));
   pixels->setPixelColor(12, pixels->Color(g));
   pixels->setPixelColor(29, pixels->Color(g));
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(31, pixels->Color(g)); 
   pixels->setPixelColor(39, pixels->Color(r));
   pixels->setPixelColor(40, pixels->Color(g));
   pixels->setPixelColor(41, pixels->Color(r));
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));
   
}
{

  case 1:

  pointLeft1[0] = 0;
  pointLeft1[1] = 0;
  pointLeft1[4] = 1;pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(6, pixels->Color(r));
   pixels->setPixelColor(7, pixels->Color(g));
   pixels->setPixelColor(8, pixels->Color(g));
   pixels->setPixelColor(9, pixels->Color(r)); 
  pointLeft1[5] = 1;
  pointLeft1[6] = 0;
  pointLeft1[7] = 0;
  pointRight1[5] = 1;
  pointRight1[6] = 1;
  pointRight1[7] = 0;

  pixels->setPixelColor(1, pixels->Color(b));
   pixels->setPixelColor(3, pixels->Color(g));
   pixels->setPixelColor(4, pixels->Color(r));
   pixels->setPixelColor(5, pixels->Color(g));
   pixels->setPixelColor(10, pixels->Color(r));
   pixels->setPixelColor(11, pixels->Color(g));
   pixels->setPixelColor(12, pixels->Color(r));
   pixels->setPixelColor(29, pixels->Color(g));
   pixels->setPixelColor(30, pixels->Color(r));
   pixels->setPixelColor(31, pixels->Color(g)); 
   pixels->setPixelColor(39, pixels->Color(r));
   pixels->setPixelColor(40, pixels->Color(g));
   pixels->setPixelColor(41, pixels->Color(r));
   pixels->setPixelColor(46, pixels->Color(g));
   pixels->setPixelColor(47, pixels->Color(r));
}

{
  case 3:
  
  pointRight2[6] = 1;
  pointRight2[7] = 1;

   pixels->setPixelColor(61, pixels->Color(r));
   pixels->setPixelColor(62, pixels->Color(g));
   pixels->setPixelColor(63, pixels->Color(r));
   pixels->setPixelColor(64, pixels->Color(g));
   pixels->setPixelColor(65, pixels->Color(y));
   
     }
}
