Eint mq3=A1,lectura,
ledR=5,ledA=6,ledV=7;
void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lectura=analogRead(mq3);
  //float voltaje=lectura * (5.0/1023.0);
  //Serial.println(String(lectura) + " - " + String(voltaje));
  int porcen=map(lectura,0,1023,0,100);
  if(porcen<25){
    digitalWrite(ledV,1);
    digitalWrite(ledA,0);
    digitalWrite(ledR,0);
    Serial.println("Sin presencia de alcohol");
  }
  else if(por
else if(porcen<40){
    digitalWrite(ledV,0);
    digitalWrite(ledA,1);
    digitalWrite(ledR,0);
    Serial.println("Presencia de alcohol en valores aceptables");
  }
  else{
    digitalWrite(ledV,0);
    digitalWrite(ledA,0);
    digitalWrite(ledR,1);
    Serial.println("Presencia de alcohol alta!");
  }
    delay(1000);
}
