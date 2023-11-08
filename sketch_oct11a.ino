const int kPinBtn = 8;

void setup()
{
  Serial.begin(115200);
  pinMode(kPinBtn, INPUT);
}

void loop()
{
  Serial.write("Hola");
  delay(2000);
}
