#include <Servo.h>
Servo a, b;
int pulsomin=650, pulsomax=2550;
void setup() {
  //a.attach(3);
  //a.attach(3,650,2550);
  a.attach(3,pulsomin,pulsomax);
  b.attach(5,pulsomin,pulsomax);
  
}

void loop(){
  a.write(0); //0-90  1ms   90-180 2ms
  b.write(180); //0-90  1ms   90-180 2ms
  delay(400);
  a.write(180); //0-90  1ms   90-180 2ms
  b.write(0); //0-90  1ms   90-180 2ms
  delay(400);
}
