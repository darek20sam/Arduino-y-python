 void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   int pot = analogRead(A0);
   Serial.println(pot);
   analogWrite(2, pot / 4);
}
