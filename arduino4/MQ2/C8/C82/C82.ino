int P1=A0, B1=4, LedA=3;
int estado=0, estadoAnt=0, salida=0,ledA=3;
void setup(){
  pinMode(P1,INPUT);
  pinMode(B1,INPUT);
  pinMode(ledA,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estado=digitalRead(P1);
  if(estado and estadoAnt==0){
    salida=1-salida;
    delay(20); 
  }
   estadoAnt=estado;
  if(salida){ //salida==1
    Serial.println("Sistema encendido");
    digitalWrite(ledA,1);
  }
   else{
    digitalWrite(ledA,0);
    Serial.println("Sistema apagado");
  }
}
