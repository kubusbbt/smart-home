
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

#include <WiFiClient.h>
#include <ESP8266WebServer.h>



/**** Biblioteki RC switch *****/
#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();



/**** TCP ****/
#include <WiFiServer.h>
#define PORT 1000
WiFiClient client;
WiFiServer server(PORT);
//String dataClient;



char auth[] = "f012bd4309ee48a6b7c8046fc7c0e13b";
char ssid[] = "JAdesign";
char pass[] = "16031987";


void setup()
{
  Serial.begin(9600);

  // Testowa dioda
//  pinMode(D7, OUTPUT);

  // pin do resetowania
  pinMode(D8, OUTPUT);
  digitalWrite(D8, LOW);


  // Numer pinu do wysyłki danych RC
  mySwitch.enableTransmit(D1);
  mySwitch.setPulseLength(206);


  /**** Połączenie z WiFi ****/
  WiFi.begin(ssid, pass);
  server.begin();

}


void loop()
{

  timer();

  /**** Odpalenie funkcji do TCP ****/
  tcp();
//  tcp_config();
}
