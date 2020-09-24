int led=3, pulsador=4,estado;
int aleatorio;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(pulsador,INPUT);
  Serial.begin(9600); //inicializa el monitor
}

void loop() {
  estado=digitalRead(pulsador);
  if(estado){
    aleatorio=random(1,10);
    Serial.println(aleatorio);
    for(int i=0; i<aleatorio;i++){
      digitalWrite(led,1);
      delay(1000);
      digitalWrite(led,0);
      delay(1000);
    }
  }  
}
