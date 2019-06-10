// URL: https://www.maxphi.com/ir-remote-control-decoder-using-arduino


#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(115200);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    Serial.println("");               
     
    irrecv.resume(); // Receive the next value
  }
}