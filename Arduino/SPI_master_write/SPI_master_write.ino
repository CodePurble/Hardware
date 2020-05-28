#include <SPI.h>

/* Master Write */
/*
void setup()
{
  SPI.begin();
}

byte num = 0;

void loop()
{
  SPI.beginTransaction(SPISettings(16000000, LSBFIRST, SPI_MODE0));
  digitalWrite(SS, LOW);
  SPI.transfer(num++);
  delay(100);
  digitalWrite(SS, HIGH);
  SPI.endTransaction();
}
*/

/* Slave Read */
void setup()
{
  SPI.begin();
  Serial.begin(9600);
}

byte receivedVal;

void loop()
{
  SPI.beginTransaction(SPISettings(16000000, LSBFIRST, SPI_MODE0));
  receivedVal = SPI.transfer(receivedVal);
  Serial.println(receivedVal);
  delay(500);
  SPI.endTransaction();
}
