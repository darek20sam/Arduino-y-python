#include <Servo.h>
Servo servin;

void setup() {
  servin.attach(22);
}

void loop() {
  servin.write(0);
  delay(500);
  
}
