int MQ2=A2;
int e=11;
int lectura;
int ledr=10;
void setup() {
  pinMode(MQ2, INPUT);
  pinMode(ledr, OUTPUT);
  Serial.begin(9600);
}

void loop(){ 
 lectura==analogRead(MQ2);
 lectura+digitalRead(e);
 Serial.println(lectura);
 delay(600);
}  
