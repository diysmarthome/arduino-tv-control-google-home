/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define USERNAME    "" // YOUR_AIO_USERNAME
#define KEY "" // YOUR_AIO_KEY

/******************************* MQTT_Client **************************************/

#define WIFI_SSID       "" // YOUR_WIFI_SSID
#define WIFI_PASS       "" // YOUR_WIFI_PASS

// comment out the following two lines if you are using fona or ethernet
#include "Adafruit_MQTT_Client.h"
Adafruit_MQTT_Client mqtt(USERNAME, KEY, WIFI_SSID, WIFI_PASS);
