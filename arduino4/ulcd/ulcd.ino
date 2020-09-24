 #include<LiquidCrystal.h>  
 int RS = 4;
int E = 5;
int D4 = 6;
int D5 = 7;
int D6 = 8;
int D7 = 9;
int VO = 3;// Incluye la librer�a para el LCD
 LiquidCrystal lcd(RS, E, D4, D5, D6, D7);  // Define los pines de Arduino que se van a usar con el LCD
int Pecho = 11;                        // Define los pines de Arduino que se van a usar con el Sensor HC-SR04
int Ptrig = 10;
long duracion, distancia;   
 
void setup() {                
  pinMode(Pecho, INPUT);               // Define el pin 6 como entrada (echo)
  pinMode(Ptrig, OUTPUT);              // Define el pin 7 como salida  (triger)
   lcd.begin (16, 2);                  // Inicializa el LCD como 2 filas de 16 caracteres
   lcd.setCursor(0,0);                 // Escribir en primera l�nea
   lcd.print(" ");
   lcd.print("SENSOR HC-SR04");        // Inicio o presentaci�n
   lcd.print("  ");
   lcd.setCursor(0,1);                 // Escribir en segunda l�nea
   lcd.print("  ");
   lcd.print("ULTRASONIDOS");
   lcd.print("  ");
   delay(2000);
   lcd.setCursor(0,0);
   lcd.print("   ");
   lcd.print("PRECISION");
   lcd.print("    ");
   lcd.setCursor(0,1);
   lcd.print("      ");
   lcd.print("90%");
   lcd.print("       ");
   delay(2000);
   
  }
  
void loop() {
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);          // Recibe se�al de Triger
  distancia = (duracion/2) / 29;            // Calcula la distancia en centimetros
  
  if (distancia >= 500 || distancia <= 0){  // Si la distancia es mayor a 500cm o menor a 0cm 
   lcd.setCursor(0,0);                      // Determina d�nde escribir (segunda l�nea)
   lcd.print(" ");
   lcd.print("FUERA DE RANGO");                // No mide nada, env�a mensaje de fuera de rango, o no hay sensor
   lcd.print(" ");
   lcd.setCursor(0,1);
   lcd.print("O NO HAY SENSOR!!");
   delay(1500);
   lcd.setCursor(0,0);
   lcd.print("   ");
   lcd.print("ACERQUESE");
   lcd.print("    ");
   lcd.setCursor(0,1);
   lcd.print("O CONECTE SENSOR");
   delay(2000);
   lcd.setCursor(0,0);
   lcd.print(" ");
   lcd.print("LUEGO REINICIE");
   lcd.print("  ");
   lcd.setCursor(0,1);
   lcd.print("                ");
   delay(1500);
  }
  else {
    lcd.setCursor(0,0);             // Determina d�nde escribir (primera l�nea)
    lcd.print("------");            // Decoraci�n
    lcd.print(distancia);           // Env�a el valor de la distancia por el LCD
    lcd.print("cm");                // Pone "cm" al lado del valor
    lcd.print("------");            // Decoraci�n
    lcd.setCursor(0,1);
    lcd.print("                ");   // Segunda l�nea vac�a (Necesario, porque sino se quedar�a escrito alg�no de los textos de m�s adelante)
    delay(500);
  }
  
   if (distancia <= 20 && distancia >= 15){
    lcd.setCursor(0,1);
    lcd.print("ESTA CERCA");         // envia texto a LCD (segunda l�nea)
    delay(500);
  }
   if (distancia <= 14 && distancia >= 10){
    lcd.setCursor(0,1);
    lcd.print("ESTA MAS CERCA");         // envia texto a LCD (segunda l�nea)
    delay(500);
  }
   if (distancia <= 9 && distancia >= 5){
    lcd.setCursor(0,1);
    lcd.print("ESTA MUY CERCA");         // envia texto a LCD (segunda l�nea)
    delay(500);
  }
   if (distancia <= 4 && distancia >= 1){
    lcd.setCursor(0,1);
    lcd.print("DELANTE SENSOR");         // envia texto a LCD (segunda l�nea)
    delay(250);
   }

  }
