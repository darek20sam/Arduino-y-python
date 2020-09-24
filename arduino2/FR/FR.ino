#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
int FR=A0, NL;
void setup(){
  pinMode(FR,INPUT);
  Wire.begin();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
}
void loop(){
  NL=analogRead(FR);
  int LI=map(NL,0,8300,0,100);
  lcd.setCursor(0, 0);
  lcd.print(LI);
  delay(500);
}
