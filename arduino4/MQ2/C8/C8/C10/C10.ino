int trig=7, echo=6, ledR=8, ledV=10, ledA=9;
long duracion, distancia;
void setup() {
  pinMode(ledV,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledR,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  duracion=pulseIn(echo,1); 
  distancia=(duracion/2)/29;
  Serial.println(distancia);
  if(distancia>=15){
    digitalWrite(ledV,1);
    digitalWrite(ledR,1);
    digitalWrite(ledA,1);
     
  }
  else{
    digitalWrite(ledV,0);
    digitalWrite(ledR,0);
    digitalWrite(ledA,0);
  }
}
