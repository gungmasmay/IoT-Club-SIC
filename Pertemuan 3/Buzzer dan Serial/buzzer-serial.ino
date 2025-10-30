int buzzer1 = 8;
void setup()
{
  pinMode(buzzer1, OUTPUT);
  Serial.begin(9600);
  Serial.println("Buzzer Siap");
}

void loop()
{
  String s = Serial.readString();
  s.trim();
  if (s == "hidup")
  {
    tone(buzzer1, 1000);
    Serial.println("Buzzer nyala");
  }
  else if (s == "mati")
  {
    noTone(buzzer1);
    Serial.println("Buzzer mati");
  }
}