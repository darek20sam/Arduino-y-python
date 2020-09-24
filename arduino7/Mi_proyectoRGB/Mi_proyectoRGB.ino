int P1=4, P2=5, P3=6;
int ledV=10, ledA=11, ledR=9;
void setup() {
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  pinMode(P3, INPUT);
}
void loop() {
  if(P1==1);{
  digitalWrite(ledR,1);
  delay(500);
  digitalWrite(ledR,0);
  digitalWrite(ledV,1);
  delay(500);
  digitalWrite(ledV,0);
  digitalWrite(ledA,1);
  delay(500);
  digitalWrite(ledA,0);
  }
  if(P2==1);{
  digitalWrite(ledA,1);
  delay(500);
  digitalWrite(ledA,0);
  digitalWrite(ledV,1);
  delay(500);
  digitalWrite(ledV,0);
  digitalWrite(ledR,1);
  delay(500);
  digitalWrite(ledR,0);
  }
  if(P3==1);{
  digitalWrite(ledR,1);
  delay(500);
  digitalWrite(ledR,0);
  digitalWrite(ledV,1);
  delay(500);
  digitalWrite(ledV,0);
  digitalWrite(ledA,1);
  delay(500);
  digitalWrite(ledA,0);
  delay(500);
   digitalWrite(ledA,1);
  delay(500);
  digitalWrite(ledA,0);
  digitalWrite(ledV,1);
  delay(500);
  digitalWrite(ledV,0);
  digitalWrite(ledR,1);
  delay(500);
  digitalWrite(ledR,0);
 }
}
