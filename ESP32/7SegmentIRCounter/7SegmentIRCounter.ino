// int segments[7] = {15, 2, 0, 4, 16, 5, 17}; // {a, b, c, d, e, f, g} esp32

#define SEGON LOW
#define SEGOFF HIGH
#define IR 9

int segments[7] = {2, 3, 4, 5, 6, 7, 8};
int count = 0;

void displayDigit(int digit);

void setup()
{
    for(int i = 0; i < 7; i++){
        pinMode(segments[i], OUTPUT);
    }
    pinMode(IR, INPUT);
}

void loop()
{
    if(digitalRead(IR) != 1){
        displayDigit(count);
        count++;
        delay(1000);
    }
    else{
        displayDigit(count);
    }
    delay(10);
    displayDigit(-1);
}

void displayDigit(int digit){
    if (digit >= 10)
    {
        digit %= 10;
    }

    switch (digit)
    {
    case 0:
        for (int i = 0; i < 6; i++)
        {
            digitalWrite(segments[i], SEGON);
        }
        break;
    case 1:
        digitalWrite(segments[1], SEGON);
        digitalWrite(segments[2], SEGON);
        break;
    case 2:
        digitalWrite(segments[0], SEGON);
        digitalWrite(segments[1], SEGON);
        digitalWrite(segments[6], SEGON);
        digitalWrite(segments[4], SEGON);
        digitalWrite(segments[3], SEGON);
        break;
    case 3:
        digitalWrite(segments[0], SEGON);
        digitalWrite(segments[1], SEGON);
        digitalWrite(segments[6], SEGON);
        digitalWrite(segments[2], SEGON);
        digitalWrite(segments[3], SEGON);
        break;
    case 4:
        digitalWrite(segments[5], SEGON);
        digitalWrite(segments[1], SEGON);
        digitalWrite(segments[6], SEGON);
        digitalWrite(segments[2], SEGON);
        break;
    case 5:
        digitalWrite(segments[0], SEGON);
        digitalWrite(segments[5], SEGON);
        digitalWrite(segments[6], SEGON);
        digitalWrite(segments[2], SEGON);
        digitalWrite(segments[3], SEGON);
        break;
    case 6:
        for (int i = 0; i < 7; i++)
        {
            if (i == 1)
                continue;
            digitalWrite(segments[i], SEGON);
        }
        break;
    case 7:
        digitalWrite(segments[0], SEGON);
        digitalWrite(segments[1], SEGON);
        digitalWrite(segments[2], SEGON);
        break;
    case 8:
        for (int i = 0; i < 7; i++)
        {
            digitalWrite(segments[i], SEGON);
        }
        break;
    case 9:
        for (int i = 0; i < 7; i++)
        {
            if(i == 4)
                continue;
            digitalWrite(segments[i], SEGON);
        }
        break;
    case -1:
        for (int i = 0; i < 7; i++)
        {
            digitalWrite(segments[i], SEGOFF);
        }
        break;
        default:
        break;
    }
}
