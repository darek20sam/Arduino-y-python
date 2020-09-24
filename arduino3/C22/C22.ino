#include <SoftwareSerial.h>
SoftwareSerial bt (10,11);//RX,TX.
void setup() {
  bt.begin(38400);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  digitalWrite(9,1);
  Serial.println("Bienvenidos a los comandos AT");
}

void loop() {
  if(bt.available()){
    Serial.write(bt.read());
  }
  if(Serial.available()){
    Serial.write(Serial.read());
  }
}
