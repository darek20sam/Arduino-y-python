#include <Stepper.h>
Stepper motorl(2048, 8, 10, 9, 11);
void setup() {
  // put your setup code here, to run once:
 motorl.setSpeed(2);
}

void loop() {
  // put your main code here, to run repeatedly:
 motorl.step(512);//si queremos dar la
 //vuelta en sentitido contrario le damos 
 //un valor negativo ejemplo:(-512);
 delay(500);
 //motorl.step(-512);
 //delay(500);
}
