const int IRProx = 32;

void setup()
{
    pinMode(IRProx, INPUT);
    pinMode(2, OUTPUT);
}

void loop()
{
    if(digitalRead(IRProx) == 1){
        digitalWrite(2, 0);
    }
    else{
        digitalWrite(2, 1);
    }

    delay(100);

}