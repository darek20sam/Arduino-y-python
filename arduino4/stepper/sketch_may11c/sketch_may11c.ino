#include <Stepper.h>
Stepper motorl(2048, 8, 10, 9, 11);
 void setup() {
  // put your setup code here, to run once:
 motorl.setSpeed(0);
}

void loop() {
  // put your main code here, to run repeatedly:
 motorl.step(0);
 delay(0);
}
