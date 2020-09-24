int led=6;
int pulsador=5;
int lectura=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(pulsador,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lectura=digitalRead(pulsador);
  if(lectura==1){
    digitalWrite(led,1);
  }
  else{
      digitalWrite(led,0);
    }
}
