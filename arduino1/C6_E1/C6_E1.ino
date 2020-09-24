int ledb=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledb,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledb,255);
  delay(1000);
  analogWrite(ledb,180);
  delay(1000);
  analogWrite(ledb,90); 
  delay(1000); 
  analogWrite(ledb,0);
  delay(1000);
}
