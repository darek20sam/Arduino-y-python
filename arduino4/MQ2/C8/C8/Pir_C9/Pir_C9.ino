int pir=3, ledV=6,ledR=5,pulsador=4,
estado, estadoAnt=0, salida=0,lectura;
void setup() {
  pinMode(pir,INPUT);
  pinMode(pulsador,INPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledR,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estado=digitalRead(pulsador);
  if(estado and estadoAnt==0){
    salida=1-salida;
  }
  estadoAnt=estado;
  if(salida){
    Serial.println("Sistema de alarma encendido");
    lectura=digitalRead(pir);
    if(lectura){
      digitalWrite(ledV,0);
      Serial.println("Alerta!!!");
      for(int i=0;i<=4;i++){
        digitalWrite(ledR,1);
        delay(250);
        digitalWrite(ledR,0);
        delay(250);
      }
    }
    else{
      digitalWrite(ledV,1);
      digitalWrite(ledR,0);
      Serial.println("Todo estable");
    }
  }
  else{
    Serial.println("Sistema apagado");
    digitalWrite(ledV,0);
    digitalWrite(ledR,0);
  }
}
