#include <Servo.h>

#define TRIG 12
#define ECHO 13
#define ML_Ctrl 2
#define ML_PWM 5
#define MR_Ctrl 4
#define MR_PWM 6
#define SERVO_PIN A3

Servo servo;

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

float leerDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duracion = pulseIn(ECHO, HIGH);
  return duracion * 0.034 / 2;
}

void setup() {
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  servo.attach(SERVO_PIN);
  servo.write(90);
  delay(500);
}

void loop() {
  float distancia = leerDistancia();

  if (distancia > 0 && distancia < 20) {
    parar();
    delay(300);

    // Mirar izquierda
    servo.write(180);
    delay(500);
    float distanciaIzquierda = leerDistancia();

    // Mirar derecha
    servo.write(0);
    delay(500);
    float distanciaDerecha = leerDistancia();

    // Volver al centro
    servo.write(90);
    delay(300);

    if (distanciaIzquierda > distanciaDerecha) {
      izquierda();
    } else {
      derecha();
    }
    delay(500);
  } else {
    adelante();
  }
}