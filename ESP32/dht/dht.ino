#include <DHT.h>

DHT dht(4, DHT11);
void setup() {

  Serial.begin(115200); // Set bitrate (baud)
  dht.begin();

}

void loop() {
  
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if(isnan(temperature) || isnan(humidity)){
    Serial.println("Error!!!");
  }
    Serial.println("Humidity: ");
    Serial.println(humidity);
    Serial.println("Temperature: ");
    Serial.println(temperature);
    delay(1000);
    

}
