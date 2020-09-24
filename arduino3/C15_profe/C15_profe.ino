int tierra=A0,lectura,
ledV=12,ledA=11,ledR=10,
tierrad=8,lecturad;
void setup() {
  Serial.begin(9600);
  pinMode(ledV,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledR,OUTPUT);
  pinMode(tierrad,INPUT);
}

void loop() {
  lectura=analogRead(tierra);
  lecturad=digitalRead(tierrad);
  int porcentaje=map(lectura,0,1023,0,100);
  if(porcentaje>60){
    digitalWrite(ledV,1);
    digitalWrite(ledR,0);
  }
  else{
    digitalWrite(ledV,0);
    digitalWrite(ledR,1);
  }
  if(lecturad){
    digitalWrite(ledA,1);
    Serial.println("Tierra mojada");
  }
  else{
    digitalWrite(ledA,0);
    Serial.println("Tierra seca - Regar!");
  }
  delay(500);
}
