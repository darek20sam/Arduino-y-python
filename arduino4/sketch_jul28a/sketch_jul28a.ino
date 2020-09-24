int agua=A1,lectura,nivel,
ledV=8, ledA=9, ledR=10;
void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
}

void loop() {
  lectura=analogRead(agua);
  nivel=map(lectura,0,1023,0,100);
  if(nivel<=25){
    digitalWrite(ledR,1);
    digitalWrite(ledA,0);
    digitalWrite(ledV,0);
  }
  else if(nivel>25 and nivel<=75){
    digitalWrite(ledR,0);
    digitalWrite(ledA,1);
    digitalWrite(ledV,0);
  }
  else{
    digitalWrite(ledR,0);
    digitalWrite(ledA,0);
    
digitalWrite(ledV,1);
  }
