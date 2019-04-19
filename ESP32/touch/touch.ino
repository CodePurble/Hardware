
int touchValue;

void setup() {

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  

}

void loop() {
  
  touchValue = touchRead(32); //32 is pin number
  Serial.println(touchValue);

  if(touchValue < 50){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }
  delay(1000);
}
