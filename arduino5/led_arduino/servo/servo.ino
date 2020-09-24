#include <Servo.h>
 Servo servin;
void setup() {
  servin.attach(11);
}

void loop() {
  servin.write(0);
  delay(1000);
  servin.write(180);
   delay(1000);
}
