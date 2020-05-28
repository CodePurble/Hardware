#include <DHT.h>

#define DHTPIN 6 // D6 -> 6       
 
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
 
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  else {
    // Serial.print() and Serial.println() don't support C style format strings (%d, %f, etc)  so you have to do it this way
    Serial.print("Temperature : ");
    Serial.println(t);
    Serial.print("Humidity : ");
    Serial.println(h);
    return;
  }

  delay(1000*20);
}     
