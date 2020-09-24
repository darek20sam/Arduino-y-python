int rojo=13;
char dato=' ';
void setup(){
  Serial.begin(9600);
  pinMode(rojo,OUTPUT);
}

void loop(){
  if(Serial.available()>0){
    dato=Serial.read();
  }
  if(dato=='a'){
    digitalWrite(rojo,1);
  }
  else if(dato=='b'){
    digitalWrite(rojo,0);
  }
}
