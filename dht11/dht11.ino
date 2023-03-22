#include <DHT.h>

#define DHTTYPE DHT11
#define DHTPIN 2

DHT dht(DHTPIN, DHTTYPE);
void setup() {
  dht.begin();
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
float h=dht.readHumidity();
float t=dht.readTemperature();

Serial.println(F("Humidity: "));
Serial.println(h);
Serial.println(F("%  Temperature: "));
Serial.println(t);
delay(2000);
}
