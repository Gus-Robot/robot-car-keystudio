#include <IRremote.h>

#define IR_PIN 3

IRrecv irrecv(IR_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  Serial.println("Esperando señal IR...");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.print("Código recibido: ");
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}