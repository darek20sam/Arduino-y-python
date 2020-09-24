int P1=A0, P2=A1;
int ledA=3;
int B1=4;
int lectura;
void setup() {
  pinMode(ledA,OUTPUT);
  pinMode(B1,INPUT);
  pinMode(P1,INPUT);
  pinMode(P2,INPUT);
  Serial.begin(9600);
}

void loop() {
  lectura=P1;
  Serial.println(lectura);
}
