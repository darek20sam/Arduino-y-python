int ledV=5, potenciometro=A0,lectura;
void setup() {
  pinMode(ledV,OUTPUT);
}

void loop() {
  lectura=analogRead(potenciometro);  //0-1023
  int intensidad=map(lectura,0,1023,0,255);
  analogWrite(ledV,intensidad);
}
