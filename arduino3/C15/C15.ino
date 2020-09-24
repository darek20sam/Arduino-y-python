int wrt=A0,lm;
void setup() {
  // put your setup code here, to run once:
  pinMode(wrt, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lm=analogRead(wrt);
  int lc=map(lm,0,625,0,100);
  Serial.println(lc);
  delay(500);
}
