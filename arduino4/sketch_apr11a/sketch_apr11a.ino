#include <Servo.h>

Servo servo1;

int PINSERVO = 2;
int PULSOMIN = 1000;
int PULSOMAX = 2000;

void setup(){
  servo1.attach(2, 1000, 2000)
; }

void loop(){
  servo1.write(0);
  servo1.write(180);
  servo1.write(0);
 ;}
