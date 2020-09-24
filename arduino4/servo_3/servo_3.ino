#include <Servo.h>
Servo servin;
void setup() {
  servin.attach(11);

}

void loop() {
   servin.write(0);
   delay(500);
   servin.write(45);
   delay(500);  
   servin.write(90);
   delay(500);
   servin.write(135);
   delay(500);
   servin.write(180);

































   
}
