#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
Servo servin;
int g, f,P1=23, Pot=A15;
void setup() {
  pinMode(Pot, INPUT);
  pinMode(P1, INPUT);
  Wire.begin();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("servo");
  lcd.setCursor(0, 1);
  lcd.print("1");
  //lcd.noBacklight();
  servin.attach(22);
  delay(2000);
  lcd.clear();
}

void loop() {
  f=analogRead(Pot);
  g=map(f,0,1023,0,180);
 
  if(P1==1){
  servin.write(0);
  }
  else{
    servin.write(g);
  }
  servin.write(g);
  lcd.print(g);
  delay(500);
  lcd.clear();
}
