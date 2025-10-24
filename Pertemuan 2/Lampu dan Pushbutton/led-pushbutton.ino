int button_pin = 2;
int led_pin = 8;
int on_off = 0;
void setup()
{
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  on_off = digitalRead(button_pin);
  digitalWrite(led_pin, on_off);
}