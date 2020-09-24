#include <Servo.h>
Servo servin;

void setup() {
  servin.attach(13);
}

void loop() {
  servin.write(0);
  delay(500);
  servin.write(90);
  delay(500);
  servin.write(180);
  delay(500);

}
