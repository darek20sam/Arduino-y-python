int MQ2=A2;
int lectura;
int ledr=10;
void setup() {
  pinMode(MQ2, INPUT);
  pinMode(ledr, OUTPUT);
}

void loop(){ 
 lectura==analogRead(MQ2);
 if (lectura==1){  
  digitalRead(ledr,1);
 }
}  
