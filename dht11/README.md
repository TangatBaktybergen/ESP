# Connecting DHT11 sensor to ESP8266

DHT11 sensor reads temperature and humidity values around it and sends the data to ESP8266.

The program uses "DHT.h" library and the sensor is connected to pin 2. Further information about the sensor can be found in its datasheet.

dht.begin() starts reading the values at speed of 115200 bps. dht.readHumidity() command reads humudity values and dht.readTemperature() reads temperature values. The values are refreshed every 2 seconds.
