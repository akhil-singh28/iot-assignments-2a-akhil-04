int pir = 3;
void setup(){}
pinMode(pir, INPUT);

Serial.begin(9600);
void loop()
{
    int pirValue = digitalRead(pir);
    if (pirValue == 1)
    {
        Serial.println("Motion Detected");
    }
    else
    {
        Serial.println("No Motion Detected");
    }
    delay(1000);
}
