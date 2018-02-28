int timer()
{

//  int count = 10000; // 10 sek
  int count = 43200000; // 10 sek

  if( millis() > count )
  
//  if( millis() > 10000 )
  {

//    digitalWrite(D7, HIGH);
    delay(1000);

    digitalWrite(D8, HIGH);


  }
  
}

