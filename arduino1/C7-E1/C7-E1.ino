int ledV=5, P1=A0, lectura;
void setup(){
  pinMode(ledV,OUTPUT);
  pinMode(P1,INPUT);
}

void loop() {
 lectura=analogRead(P1);
 int intensidad=map(lectura,0,1023,0,255);
 analogWrite(ledV,intensidad); 
}
