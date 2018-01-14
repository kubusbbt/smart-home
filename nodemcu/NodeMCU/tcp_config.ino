

/*
*   Funkcja testująca requesty TCP, zwraca true/false jeśli parametr id zgadza się z wysłanym request
*   
*   Przykad wykorzystania
*
*    if( click('2') ){
*      Serial.print("fslkhd");  
*    }  
*/


int tcp_config()
{

  if( tcp_click('1') )
  {
    mySwitch.send("010001010101010111000011");
  }
  
}


int tcp_click(char id)
{
  
//  while(!client.connected()){
    client = server.available();
//  }

  while( client.connected() ) {
    if(client.available()) {
      while(client.available()){

        char data = client.read();
        dataClient = data;

        Serial.print( dataClient );

        if( data == id ){
          return true; 
        }
        else{
          return false;
        }

      }
    }
  }

}

