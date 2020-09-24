int buzz=9;
void setup() {
  pinMode(buzz,OUTPUT);
}

void loop() {
  tone(buzz,262);
  delay(1000);
  tone(buzz,294);
  delay(1000);
  tone(buzz,330);
  delay(1000);
  tone(buzz,349);
  delay(1000);
  tone(buzz,392);
  delay(1000);
  tone(buzz,440);
  delay(1000);
  tone(buzz,494);
  delay(1000);
  tone(buzz,523);
  delay(1000);
}
