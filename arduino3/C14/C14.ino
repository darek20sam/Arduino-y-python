int UV=A0, VAI;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(UV,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  VAI=analogRead(UV);
  int intensidad=map(VAI,0,1023,0,11);
  Serial.println(intensidad);
  delay(1000);
}
