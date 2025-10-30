int buzzer = 8;

void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  Serial.println("Buzzer siap");
}

void loop()
{
  String s = Serial.readString();
  s.trim();
  if (s == "hidup")
  {
    tone(buzzer, 1000);
    Serial.println("Buzzer hidup");
  }
  else if (s == "mati")
  {
    noTone(buzzer);
    Serial.println("Buzzer mati");
  }
}