int MIC = 2;
int LED = 3;
int VALOR;
int ESTADO; 
void setup() {
  // put your setup code here, to run once:
 pinMode(MIC, INPUT);
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 VALOR = digitalRead(MIC);
 Serial.println(VALOR);
 if (VALOR == HIGH);

   ESTADO = digitalRead(LED);
   digitalWrite(LED, ESTADO);
   delay(500); 
}
