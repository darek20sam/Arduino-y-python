#include <Servo.h>
Servo a, b;
int pot1=A0,pot2=A1;
int pulsomin=650, pulsomax=2550;
void setup() {
  //a.attach(3);
  //a.attach(3,650,2550);
  pinMode(pot1,INPUT);
  pinMode(pot2,INPUT);
  a.attach(3,pulsomin,pulsomax);
  b.attach(5,pulsomin,pulsomax);
} 
void loop(){
  int G1=map(pot1,0,1023,0,180);
  int G2=map(pot2,0,1023,0,180); 
  a.write(G1);
  a.write(G1);
}
