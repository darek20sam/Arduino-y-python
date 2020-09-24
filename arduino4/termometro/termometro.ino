#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
DHT sensor(52,DHT22);
void setup() {
  Serial.begin(9600);
  sensor.begin();
  delay(2000);
  Wire.begin();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido");
  lcd.setCursor(0, 1);
  lcd.print("Termometro,hum");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Version:");
  lcd.setCursor(0, 1);
  lcd.print("1.0.1.");
  delay(1000);
  lcd.clear();
}

void loop() {
  //float t=sensor.readTemperature(); //centigrados
  float t=sensor.readTemperature(false); //centigrados
  float h=sensor.readHumidity();
  //float i=sensor.computeHeatIndex(t,h,true);  //centi
  float icf=sensor.computeHeatIndex(t,h,false);  //centi
  Serial.print("Temperatura:");
  Serial.print(t);
  Serial.println("ºC");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Temp: Hum:");
  lcd.setCursor(0, 1);
  lcd.print(t);
  lcd.setCursor(6, 1);
  lcd.print(h"%");
  delay(2000);
}    
