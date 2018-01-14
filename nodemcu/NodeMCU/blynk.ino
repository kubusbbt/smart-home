
BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    clarus_3("on");
  }
}


BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    clarus_3("off");
  }
}


BLYNK_WRITE(V2)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    clarus_2("on");
  }
}


BLYNK_WRITE(V3)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    clarus_2("off");
  }
}


BLYNK_WRITE(V10)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    clarus_3("on");
    clarus_2("on");  
  }
}


BLYNK_WRITE(V11)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    clarus_3("off");
    clarus_2("off");
  }
}






BLYNK_WRITE(V4)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_1("on");
  }
}


BLYNK_WRITE(V5)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_1("off");
  }
}


BLYNK_WRITE(V6)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_2("on");
  }
}


BLYNK_WRITE(V7)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_2("off");
  }
}


BLYNK_WRITE(V8)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_3("on");
  }
}


BLYNK_WRITE(V9)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_3("off");
  }
}


BLYNK_WRITE(V12)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_1("on");
    dpm_2("on");
    dpm_3("on");
  }
}


BLYNK_WRITE(V13)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    dpm_1("off");
    dpm_2("off");
    dpm_3("off");
  }
}

