#include <LiquidCrystal.h>
int RS = 52;
int E = 53;
int D4 = 51;
int D5 = 50;
int D6 = 49;
int D7 = 48;
int VO = 5;


LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
void setup() {
  // put your setup code here, to run once:
 analogWrite(VO, 50); 
 lcd.begin(16, 2);
 lcd.setCursor(0, 0);
 lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
 
}    
