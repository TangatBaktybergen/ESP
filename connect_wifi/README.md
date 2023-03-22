# Wemos D1 mini ESP8266 board

The programm connects your ESP8266 board to the WiFi. The name and password of the WIFi is changed manually.

The program uses "ESP8266WiFi.h" library. 
There are 2 variables where ssid is the name of your WiFi and password is its password. Please, make sure you entered them correctly!

The serial communication speed is 115200 bits per second and defined by the standards. All speeds are integer multipliers of the first standard speed 75 bps. Serial port sends message every 10ms.

WiFi.begin(SSID,PASSWORD) command starts WiFi connection. The while loop checks the connection and reports every second. 

When the board is connected, serial port will print its local IP with the command WiFi.localIP().


22nd March 2023 - Tangat Baktybergen
