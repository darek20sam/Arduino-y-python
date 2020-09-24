void setup()
{
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A0,OUTPUT); 
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop()
{
  digitalWrite(A2,1);
  digitalWrite(A1,1);
  digitalWrite(A0,1);
  delay(500);
  digitalWrite(A2,0);
  digitalWrite(A1,0);
  digitalWrite(A0,0);
  delay(500);
  digitalWrite(A2,1);
  digitalWrite(A1,1);
  digitalWrite(A0,1);
  delay(500);
  digitalWrite(A2,0);
  digitalWrite(A1,0);
  digitalWrite(A0,0);
  delay(500); 
  
  digitalWrite(5,1);
  delay(500);
  digitalWrite(4,1);
  delay(500);
  digitalWrite(3,1);
  delay(1000);
  digitalWrite(3,0);
  delay(500);
  digitalWrite(4,0);
  delay(500);
  digitalWrite(5,0);
  delay(1500);
}
