const int delayTrig = 14, delayOut = 12, led = 2;

void setup()
{
    pinMode(delayTrig, OUTPUT);
    pinMode(delayOut, INPUT);
    pinMode(led, OUTPUT);
}

void loop()
{
    digitalWrite(led, HIGH);
    // delay(500);
    digitalWrite(delayTrig, LOW);
    // delay(500);
    if(!digitalRead(delayOut))
    {
        digitalWrite(led, LOW);
    }
    digitalWrite(delayTrig, HIGH);
}