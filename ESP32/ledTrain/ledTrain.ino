void setup(){
    pinMode(15, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(0, OUTPUT);
    pinMode(4, OUTPUT);


}

void loop(){
    digitalWrite(15, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(0, LOW);
    digitalWrite(4, LOW);
    delay(100);

    digitalWrite(15, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(0, LOW);
    digitalWrite(4, LOW);
    delay(100);

    digitalWrite(15, LOW);
    digitalWrite(5, LOW);
    digitalWrite(0, HIGH);
    digitalWrite(4, LOW);
    delay(100);

    digitalWrite(15, LOW);
    digitalWrite(5, LOW);
    digitalWrite(0, LOW);
    digitalWrite(4, HIGH);
    delay(150);

    digitalWrite(15, LOW);
    digitalWrite(5, LOW);
    digitalWrite(0, HIGH);
    digitalWrite(4, LOW);
    delay(100);

    digitalWrite(15, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(0, LOW);
    digitalWrite(4, LOW);
    delay(100);

    // digitalWrite(15, HIGH);
    // digitalWrite(5, LOW);
    // digitalWrite(0, LOW);
    // digitalWrite(4, LOW);
    // delay(150);

}
//15, 5, 0, 4
