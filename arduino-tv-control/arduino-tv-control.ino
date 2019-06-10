#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t kIrLed = 4;  // ESP8266 GPIO pin to use. Recommended: 4 (D2).

IRsend irsend(kIrLed);  // Set the GPIO to be used to sending the message.

#define POWER_ON_OFF_SAM  0xE0E040BF
#define SAMSUNG_BITS  32 

#define SOUND_LOG_ON_OFF 0x400501FE
#define SOUND_UP 0x400555AA
#define SOUND_DOWN 0x400556A9

void setup() {
    Serial.begin(115200);
    irsend.begin();
}

void loop() {
  Serial.println("send data");
	_sendSam(POWER_ON_OFF_SAM, SAMSUNG_BITS);
	delay(5000); //5 second delay between each signal burst
}

void _sendSam(char code, int bits) {
  for (int i = 0; i < 3; i++) {
		//irsend.sendSony(0xa90, 12);
    irsend.sendSAMSUNG(code, bits);
		delay(40);
	}
}

void _sendSony(char code, int bits){
  for (int i = 0; i < 3; i++) {
		//irsend.sendSony(0xa90, 12);
    irsend.sendSony(code, bits);
		delay(40);
	}
}