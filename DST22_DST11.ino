#include <dht11.h>
#define DHT11PIN 4

dht11 DHT11;
void setup() {
    Serial.begin(9600);   // Start serial monitor
}
void loop() {
    Serial.println();     // Print a blank line
    int chk = DHT11.read(DHT11PIN);   // Read data from DHT11 sensor
    Serial.print("Humidity (%): ");
    Serial.println((float)DHT11.humidity, 2);
    Serial.print("Temperature (C): ");
    Serial.println((float)DHT11.temperature, 2);
    
    delay(2000);          // Wait 2 seconds before next reading
}
