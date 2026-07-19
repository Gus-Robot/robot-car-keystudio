#include <IRremote.h>

#define IR_PIN 3
#define ML_Ctrl 2
#define ML_PWM 5
#define MR_Ctrl 4
#define MR_PWM 6

IRrecv irrecv(IR_PIN);
decode_results results;

void adelante() {
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 150);
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 150);
}

void atras() {
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 150);
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 150);
}

void izquierda() {
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 200);
}

void derecha() {
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 200);
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
}

void parar() {
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
}

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    long codigo = results.value;

    if (codigo == 0xFF629D) adelante();
    else if (codigo == 0xFFA857) atras();
    else if (codigo == 0xFF22DD) izquierda();
    else if (codigo == 0xFFC23D) derecha();
    else if (codigo == 0xFF02FD) parar();

    irrecv.resume();
  }
}