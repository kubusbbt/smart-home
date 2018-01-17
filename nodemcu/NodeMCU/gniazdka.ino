/*
Sposób na wysyłanie kodu ze zmiennej

char *ddd = "010001010101010111000011";
mySwitch.send(ddd);
*/



/*
* GNIAZDKA CLARUS
*/

int clarus_3(String set){  
  if( set == "on"){
      mySwitch.send( "010001010101011100000011" ); // gniazdko 3 - on
  }else{
    mySwitch.send( "010001010101011100001100" ); // gniazdko 3 - off
  }
}


int clarus_2(String set){
  if( set == "on"){
      mySwitch.send( "010001010101010111000011" ); // gniazdko 2 - on
  }else{
    mySwitch.send( "010001010101010111001100" ); // gniazdko 2 - off
  }
}



/*
* DNIAZDKA DPM
*/

int dpm_1(String set){
  if( set == "on"){
      mySwitch.send( "0100011001011010000011110" ); // gniazdko 1 - on
  }else{
    mySwitch.send( "0100011001011010000001110" ); // gniazdko 1 - off
  }
}

int dpm_2(String set){
  if( set == "on"){
      mySwitch.send( "0100011001011010000010110" ); // gniazdko 2 - on
  }else{
    mySwitch.send( "0100011001011010000000110" ); // gniazdko 2 - off
  }
}

int dpm_3(String set){
  if( set == "on"){
      mySwitch.send( "0100011001011010000011010" ); // gniazdko 3 - on
  }else{
    mySwitch.send( "0100011001011010000001010" ); // gniazdko 3 - off
  }
}



