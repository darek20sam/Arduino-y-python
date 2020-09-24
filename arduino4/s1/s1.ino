void setup() {
  // put your setup code here, to run once:
    pinMode(13, OUTPUT);//rojo
  pinMode(12, OUTPUT);//amarillo
  pinMode(11, OUTPUT);//verde
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(800);
   digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}
