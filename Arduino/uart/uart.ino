/* Transmit */
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.write("Hello!!");
	delay(1000);
}

/* Receive */
char str[10];
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.readBytes(str, 7);
	Serial.println(str);
	delay(1000);
}
