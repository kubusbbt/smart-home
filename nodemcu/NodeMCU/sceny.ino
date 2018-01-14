
// tv
// włącza tv, włącza home
BLYNK_WRITE(V33){
  bulb_on();

  if(param.asInt() == 1){
    clarus_2("on");
  }
}


// sypialnia
// wyłącza żarówkę, gasi home, zapala sypialnię
BLYNK_WRITE(V35){
  bulb_off();

  if(param.asInt() == 1){
    clarus_2("off");
    clarus_3("on");
  }
}


// spać
// wyłącza wszystko
BLYNK_WRITE(V34){
  bulb_off();

  if(param.asInt() == 1){
    dpm_1("off");
    dpm_2("off");
    dpm_3("off");
    clarus_3("off");
    clarus_2("off");
  }
}
