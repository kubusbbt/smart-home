/*
*   Funkcja testująca requesty TCP, zwraca true/false jeśli parametr id zgadza się z wysłanym request
*   
*   Przykad wykorzystania
*
*    if( click('2') ){
*      Serial.print("fslkhd");  
*    }  
*/

int tcp_test(String code)
{

	/*************** GNIAZDKA ***************/

//	if( code == "100" )
//	{
//		clarus_3("on");
//	}
//
//	if( code == "101" )
//	{
//		clarus_3("off");
//	}
//
//	if( code == "102" )
//	{
//		clarus_2("on");
//	}
//
//	if( code == "103" )
//	{
//		clarus_2("off");
//	}
//	
//	if( code == "104" )
//	{
//		dpm_1("on");
//	}
//
//	if( code == "105" )
//	{
//		dpm_1("off");
//	}
//
//	if( code == "106" )
//	{
//		dpm_2("on");
//	}
//
//	if( code == "107" )
//	{
//		dpm_2("off");
//	}
//
//	if( code == "108" )
//	{
//		dpm_3("on");
//	}
//
//	if( code == "109" )
//	{
//		dpm_3("off");
//	}



	/*************** ŻARÓWKA ***************/
	
	if( code == "200" )
	{
		bulb_on();
	}

	if( code == "201" )
	{
		bulb_off();
	}



	/*************** SECENY ***************/

	if( code == "300" )
	{
		bulb_on();
		clarus_2("on");
	}

	if( code == "301" )
	{
		bulb_off();
    	clarus_2("off");
    	clarus_3("on");
	}

	if( code == "302" )
	{
		bulb_off();
		dpm_1("off");
		dpm_2("off");
		dpm_3("off");
		clarus_3("off");
		clarus_2("off");
	}

}





/*
* Pierwszy znak przychodzący po TCP to typ danych, jest przypisywany do zmiennej type np: 
  A - gniazdko
  B - żarówka
  C - scena
*/

int tcp()
{
  String dataClient;
  String type;

      
  while(!client.connected()){
    client = server.available();
    timer();
  }

  while( client.connected() ) {
        
    if(client.available()) {
      while(client.available()){
        
        char data = client.read();
        
        if( type == false )
        {
          type = data;  
        }
        else
        {
          dataClient += data;
        }
        
      }
    }

//    Serial.print(type);
//    Serial.print("\n");
//    Serial.print(dataClient);
//    Serial.print("\n");

    if( type == "A")
    {
      String str_code = dataClient;
      const char *code = str_code.c_str();
      
      mySwitch.send( code );
    }
    else
    {
      tcp_test( dataClient );
    }
 
  } 
}




