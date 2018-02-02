

// włącza żarówkę
int bulb_on(){
  HTTPClient http;
  http.begin("http://cod3r.pl/bulb/?hash=kuba123&mode=on");
  http.GET();
}

// wyłącza żarówkę
int bulb_off(){
  HTTPClient http;
  http.begin("http://cod3r.pl/bulb/?hash=kuba123&mode=off");
  http.GET();
}

