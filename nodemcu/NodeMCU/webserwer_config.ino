int serwer_setup()
{
  WiFi.begin(ssid, pass);
  serwer_requests();
  server.begin();
}

int serwer_loop()
{
  server.handleClient();
}


int serwer_requests()
{ 
  
  get_webserver_request();

  server.on("/js", [](){
    server.send(200, "text/html", "<script src='http://cod3r.pl/smart-house/app.js'><script>");
  });

  server.on("/get", handleGenericArgs);

  server.on("/html", [](){     
    String  html = "<!doctype html>";
            html += "<html lang=\"pl\">";
            html += "<head>";
            html += "<meta charset=\"utf-8\">";
            html += "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge,chrome=1\">";
            html += "<title></title>";
            html += "<meta name=\"description\" content=\"\">";
            html += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
            html += "</head>";
            html += "<body>";
            html += "</body>";
            html += "<script src=\"http://cod3r.pl/smart-home/app.js\"></script>";
            html += "</html>";
               
    server.send(200, "text/html", html);
  });
  
}



/* 
*  Pobiera wszystkie parametry get 
*/
void handleGenericArgs() 
{
  String message = "Number of args received:";
  message += server.args();            //Get number of parameters
  message += "\n";                            //Add a new line
  
  for (int i = 0; i < server.args(); i++) {
  
  message += "Arg nº" + (String)i + " –> ";   //Include the current iteration value
  message += server.argName(i) + ": ";     //Get the name of the parameter
  message += server.arg(i) + "\n";              //Get the value of the parameter
  
  } 
  
  server.send(200, "text/plain", message);       //Response to the HTTP request
}



/* 
*  Pobiera konkretny parametr get 
*/
void handleSpecificArg()
{ 
  String message = "";
  
  if (server.arg("Temperature")== ""){     //Parameter not found
  
  message = "Temperature Argument not found";
  
  }else{     //Parameter found
  
  message = "Temperature Argument = ";
  message += server.arg("Temperature");     //Gets the value of the query parameter
  
  }
  
  server.send(200, "text/plain", message);          //Returns the HTTP response
}
