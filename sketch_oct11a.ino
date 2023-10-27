const int kPinBtn = 8;

void setup()
{
  Serial.begin(115200);
  pinMode(kPinBtn, INPUT);
}

void loop()
{
  if(digitalRead(kPinBtn) == HIGH){
    Serial.write("Hola");
  }
  else{
    Serial.write("Caponga");
  }
}
