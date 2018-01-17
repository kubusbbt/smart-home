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

	/*************** GNIAZDKA ***************/

	if( tcp_click('100') )
	{
		clarus_3("on");
	}

	if( tcp_click('101') )
	{
		clarus_3("off");
	}

	if( tcp_click('102') )
	{
		clarus_2("on");
	}

	if( tcp_click('103') )
	{
		clarus_2("off");
	}
	
	if( tcp_click('104') )
	{
		dpm_1("on");
	}

	if( tcp_click('105') )
	{
		dpm_1("off");
	}

	if( tcp_click('106') )
	{
		dpm_2("on");
	}

	if( tcp_click('107') )
	{
		dpm_2("off");
	}

	if( tcp_click('108') )
	{
		dpm_3("on");
	}

	if( tcp_click('109') )
	{
		dpm_3("off");
	}



	/*************** ŻARÓWKA ***************/
	
	if( tcp_click('200') )
	{
		bulb_on();
	}

	if( tcp_click('201') )
	{
		bulb_off();
	}



	/*************** SECENY ***************/

	if( tcp_click('300') )
	{
		bulb_on();
		clarus_2("on");
	}

	if( tcp_click('301') )
	{
		bulb_off();
    	clarus_2("off");
    	clarus_3("on");
	}

	if( tcp_click('302') )
	{
		bulb_off();
		dpm_1("off");
		dpm_2("off");
		dpm_3("off");
		clarus_3("off");
		clarus_2("off");
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

