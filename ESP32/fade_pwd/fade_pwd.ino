  int freq = 5000; //Set frequency of input signal (Hz)
  int ledChannel = 0;
  int resolution = 8; // Number of steps taken, 2^n, more => smooth



void setup() {
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(2, ledChannel);
  

}

void loop() {

  for (int dutyCycle = 0; dutyCycle <= 255 /*2^n - 1*/; dutyCycle++){ // Fade in
    ledcWrite(ledChannel, dutyCycle);
    delay(10);
  } 

 for (int dutyCycle = 255; dutyCycle <= 0; dutyCycle--){ // Fade out
    ledcWrite(ledChannel, dutyCycle);
    delay(50);
  }

     
  

}
