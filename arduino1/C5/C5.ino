int P1=5;
int P2=4;
int LedA=6;
int LedV=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(P1,INPUT);
  pinMode(P2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(P1){
    digitalWrite(LedA,1);
   }
    else{
     digitalWrite(LedA,0); 
      }
    }
  if(P2){
    digitalWrite(LedV,1);
    else{
     digitalWrite(LedV,0); 
      }
    }
}
