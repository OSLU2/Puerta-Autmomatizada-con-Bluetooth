
#include<SoftwareSerial.h>


char NOMBRE[10] = "BLUE";    //  extensión de nombre 10 letras
char BPS = '4';   //   1 = 1200,  2 = 2400,   3= 4800,   4 = 9600,   5 = 19200;
char PASS[10] = "0117";    // extensión hasta 10 numeros

void setup ()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite (13, HIGH);
  delay (10000);
  digitalWrite(13, LOW);

  delay(1000);

  Serial.print("AT+NAME");
  Serial.print(NOMBRE);
  delay(1000);

  Serial.print("AT+BAUD");
  Serial.print(BPS);
  delay(1000);

  Serial.print("AT+PIN");
  Serial.print(PASS);
  delay (1000);
}
void loop ()
{
  digitalWrite(13, !digitalRead(13));
  delay (500);
}

