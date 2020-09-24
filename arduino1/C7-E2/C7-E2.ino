int ledV=5, P1=A0, P2=A1, lectura, lectura2, ledA=6;
void setup(){
  pinMode(ledV,OUTPUT);
  pinMode(P1,INPUT);
}

void loop() {
 lectura=analogRead(P1);
 int intensidad=map(lectura,0,1023,0,255);
 analogWrite(ledV,intensidad);
 
 lectura2=analogRead(P2);
 int intensidad2=map(lectura2,0,1023,0,255);
 analogWrite(ledA,intensidad2);    
}
