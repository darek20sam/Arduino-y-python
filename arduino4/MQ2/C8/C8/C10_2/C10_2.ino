int echo=6, trig=7;
int ledR=8, ledA=9, ledV=10;
long duracion, distancia;
void setup() {
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledR, OUTPUT);
}

void loop() {
  digitalWrite(trig, 0);
  delayMicroseconds(2);
  digitalWrite(trig, 1);
  delayMicroseconds(10);
  digitalWrite(trig, 0);
  duracion=pulseIn(echo,1);
  distancia=(duracion/2)/29;
  Serial.println(distancia);
  delay(400);
}
