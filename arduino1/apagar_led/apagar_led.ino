int rojo = 6, verde = 5, azul = 3, memin =13, memitin =4;
void setup() {
 pinMode(rojo,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(azul,OUTPUT);
}
void loop() {
 analogWrite(memin,0);
 analogWrite(rojo,0);
 analogWrite(verde,0);
 analogWrite(azul,0);
}
