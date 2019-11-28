int distance;
unsigned long duration;

void setup(){

    Serial.begin(114200);
    pinMode(0, OUTPUT);
    pinMode(4, INPUT);
    pinMode(17, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(19, OUTPUT);
}

void loop(){
    digitalWrite(0, LOW);
    delayMicroseconds(4);
    digitalWrite(0, HIGH);
    delayMicroseconds(10);
    digitalWrite(0, LOW);

    duration = pulseIn(4, HIGH);

    distance = (duration/2)*0.0343;

    if(distance <= 30){
      	digitalWrite(17, HIGH);
      	digitalWrite(5, LOW);
      	digitalWrite(19, LOW);
      
      
    }
    else if(distance <= 60 && distance >= 30){
    	digitalWrite(17, LOW);
      	digitalWrite(5, HIGH);
      	digitalWrite(19, LOW);

    }
    else{
      	digitalWrite(17, LOW);
      	digitalWrite(5, LOW);
      	digitalWrite(19, HIGH);
      
    }

    Serial.print(distance);
    Serial.println(" cm");
    delay(100);
    
}
