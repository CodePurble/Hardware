#include <WiFi.h>
#include <WiFiClient.h>
#include <Blynk.h>
#include <BlynkSimpleEsp32.h>
#define BLYNK_PRINT Serial

int LED = 2;
char auth[] = "a013a62cb9ca405da9da45b0d5c07221";
char ssid[] = "RP-Phone";
char pass[] = "4321DCBA";

void setup()
{

    pinMode(LED, OUTPUT);
    Serial.begin(115200);

    delay(10);

    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, pass);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    Serial.println("Connected");

    Blynk.begin("a013a62cb9ca405da9da45b0d5c07221", ssid, pass);
}

void loop()
{
    Blynk.run();
}