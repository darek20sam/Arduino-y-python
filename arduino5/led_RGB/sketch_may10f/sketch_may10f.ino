 int rojo = 6;
int verde = 5;
int azul = 3;
void setup() {
  // put your setup code here, to run once:
analogWrite(rojo,0);
 analogWrite(verde,0);
 analogWrite(azul,0);
}

void loop() {
  // put your main code here, to run repeatedly:
pinMode(rojo,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(azul,OUTPUT);
analogWrite(rojo,63);
 analogWrite(verde,243);
 analogWrite(azul,241);
}
