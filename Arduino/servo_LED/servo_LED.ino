#include <Servo.h>

#define LED 5
/* #define SERVO_CONTROL 9 */

Servo myServo;

void setup()
{
	pinMode(LED, OUTPUT);
	myServo.attach(9);
	myServo.write(0);
}

void loop()
{
	float intensity = 0.0;
	for(intensity = 0.0; intensity < 256.0; intensity++){
		analogWrite(LED, intensity);
		myServo.write(intensity*(180.0/256.0));
		delay(100);
	}
}
