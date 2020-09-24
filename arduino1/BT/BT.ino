#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
const int LED =13;
const int BTPWR=52;

char nombreBT[11]="JaredM";
char pin[5]="9999";
char velocidad='4';//9600
char modo='1';

void setup(){
  
  pinMode(LED, OUTPUT);
  pinMode(BTPWR, OUTPUT);

  Serial.begin(38400); //velocidad de BT en modo configuracion

  /* solo pulsador */
  digitalWrite(LED, HIGH);
  delay(4000);
  digitalWrite(LED, LOW);
  /*******************/

  digitalWrite(BTPWR, HIGH);
  delay(3000);
  Serial.print("AT\r\n");

  Serial.print("AT+NAME:");
  Serial.print(nombreBT);
  Serial.print("\r\n");

  Serial.print("AT+PIN:"); //AT+PSWD:
  Serial.print(pin);
  Serial.print("\r\n");

  Serial.print("AT+BAUD:");
  Serial.print(velocidad);
  Serial.print("\r\n");

  Serial.print("AT+MODE:");
  Serial.print(modo);
  Serial.print("\r\n");

  digitalWrite(LED, HIGH);
  
}

void loop(){
  
}
