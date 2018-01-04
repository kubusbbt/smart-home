
int get_webserver_request()
{
  
  server.on("/clarus-2_on", [](){
    mySwitch.send( "010001010101010111000011" );
  });

  server.on("/clarus-2_off", [](){
    mySwitch.send( "010001010101010111001100" );
  });

  server.on("/clarus-3_on", [](){
    mySwitch.send( "010001010101011100000011" );
  });

  server.on("/clarus-3_off", [](){
    mySwitch.send( "010001010101011100001100" );
  });



  server.on("/dpm-1_on", [](){
    mySwitch.send( "0100011001011010000011110" );
  });
  
  server.on("/dpm-1_off", [](){
    mySwitch.send( "0100011001011010000001110" );
  });  
  
  server.on("/dpm-2_on", [](){
    mySwitch.send( "0100011001011010000010110" );
  });

  server.on("/dpm-2_off", [](){
    mySwitch.send( "0100011001011010000000110" );
  });

  server.on("/dpm-3_on", [](){
    mySwitch.send( "0100011001011010000011010" );
  });

  server.on("/dpm-3_off", [](){
    mySwitch.send( "0100011001011010000001010" );
  });
  
}
