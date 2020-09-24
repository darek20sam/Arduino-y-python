int buzz=9;
int notas []={262,294,330,349,392,440,494,330,294,440};
void setup() {
  pinMode(buzz,OUTPUT);
}

void loop() {
  for(int c=0;c<11;c++){
    tone(buzz,notas[c]);
    delay(150);
    noTone(buzz);
    delay(50);
  }
  delay(2000);
  for(int c=0;c<10;c++){
    tone(buzz,notas[c]);
    delay(100);
    noTone(buzz);
    delay(100);
  }
  delay(2000);
  for(int c=0;c<10;c++){
    tone(buzz,notas[c]);
    delay(200);
  }
  noTone(buzz);
  delay(2000);
}
