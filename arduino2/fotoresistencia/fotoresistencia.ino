 int val=0;
 int serial;
 void setup() {
  // put your setup code here, to run once:
 serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 val= analogRead(3);
 serial.println(val);
 delay(100);
}
