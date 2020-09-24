void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT);//rojo
  pinMode(9,OUTPUT);//verde
  pinMode(6,OUTPUT);//azul
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, 255);
  digitalWrite(9, 255);
  digitalWrite(6, 255);
}
