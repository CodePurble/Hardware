void setup()
{
    Serial.begin(115200);
    Serial.println("Ready...");
    system("telnetd -l /bin/sh"); //Start the telnet server on Galileo
    Serial.println("Started telnet...");
    // system("ifconfig eth0 192.168.1.200// netmask 255.255.255.0 up");
}

void loop(){}