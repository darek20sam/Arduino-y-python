#include <DHT.h>
int ledR=7,ledA=6,ledV=5;

DHT sensor(3,DHT22);
void setup(){
  Serial.begin(9600);
  sensor.begin();
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
  delay(2000);
}

void loop() {
  float t=sensor.readTemperature(); //centigrados
  float tf=sensor.readTemperature(true); //centigrados
  float h=sensor.readHumidity();
  float i=sensor.computeHeatIndex(t,h,true);  //centi
  float icf=sensor.computeHeatIndex(tf,h,false);  //faren
  if(tf>15)
    digitalWrite(ledV,1);
  else
    digitalWrite(ledV,0);
  if(h<60)
    digitalWrite(ledA,1);
  else
    digitalWrite(ledA,0);
  if(t>10)
    digitalWrite(ledR,1);
  else
    digitalWrite(ledR,0);
  Serial.print("Humedad:");
  Serial.print(h);
  Serial.print("Temperatura ºC:");
  Serial.print(t);
  Serial.print("Temperatura ºF:");
  Serial.print(tf);
  Serial.print("Indice de calor:");
  Serial.print(i);
  Serial.println("ºC");
  //Serial.print("Temperatura:"+String(t)+"ºC");
  //Serial.println(" Humedad:"+String(h)+"% HR");
  delay(3000);
}
