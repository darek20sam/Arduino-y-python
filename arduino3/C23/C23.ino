int ledA=4,ledV=5;
int dato=' ';
void setup() {
  // put your setup code here, to run once:
  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    dato=Serial.read();
 }
 if(dato=='x'){
    
    digitalWrite(ledV,1);
  //o
 }
 if(dato=='z'){
    
    digitalWrite(ledV,0);
  //o
  
 }
 if(dato=='a'){
    
    digitalWrite(ledA,1);
  //o
 }
 if(dato=='b'){
    
    digitalWrite(ledA,0);
  //o
  
 }
 if(dato=='g'){
    
    digitalWrite(ledA,1);
    digitalWrite(ledV,1);
  
 }
 if(dato=='h'){
    
    digitalWrite(ledA,0);
    digitalWrite(ledV,0);
  
 }
  
}
