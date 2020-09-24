#include <LiquidCrystal.h>
int RS = 4;
int E = 5;
int D4 = 6;
int D5 = 7;
int D6 = 8;
int D7 = 9;
int VO = 3;
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
 //sensor de distancia
int ecoPin= 12;  // cabe amarillo
int trigPin= 13; // cable blanco

//led
 

long duracion, distancia; //distancia

void setup(){
  Serial.begin(9600);
  analogWrite(VO, 50); 
 lcd.begin(16, 2);
 lcd.setCursor(0, 0);
 lcd.print("Hello World");
} 
  pinMode(trigPin, OUTPUT);   //envia la señal de ultrasonido
  pinMode(ecoPin, INPUT);     //reciba la señal de ultrasonido
   
}

 void loop(){
 //funcionamento del sensor envia y recibe la señal
 digitalWrite(trigPin, LOW);  delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH); delayMicroseconds(5); 
 digitalWrite(trigPin, LOW);
 //fin
 duracion = pulseIn(ecoPin, HIGH); 
  //HIGH Si alto, comienza a contar
  //LOW se detiene el tiempo
  //http://arduino.cc/en/pmwiki.php?n=Reference/PulseIn 
  //retorna el pulso en microsegundos
 
 distancia = microsecondsToCentimeters(duracion);
 //transformo los microsegundos en centimetros
 
 Serial.print ("Tiempo en microsegundos: "); Serial.print(duracion);
 Serial.print("  Distancia estimada: "); Serial.print(distancia);
 Serial.print(" cm");
 Serial.println(" ");  
   lcd.print ("Tiempo en microsegundos: "); Serial.print(duracion);
 lcd.print("  Distancia estimada: "); Serial.print(distancia);
 lcd.print(" cm");
 lcd.println(" "); 
 delay(1000);
 if(distancia>70){
   digitalWrite(ledPin, HIGH);
   delay(20);}
 if(distancia<70){
   digitalWrite(ledPin, LOW);
   delay(20);}
 }
long microsecondsToCentimeters(long microseconds){
  // La velocidad del sonido a 20º de temperatura es 340 m/s o
  // 29 microsegundos por centrimetro.
  // La señal tiene que ir y volver por lo que la distancia a 
  // la que se encuentra el objeto es la mitad de la recorrida.
  return microseconds / 29 / 2;
}
