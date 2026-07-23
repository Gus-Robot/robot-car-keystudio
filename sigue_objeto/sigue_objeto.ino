#define TRIG 12
#define ECHO 13
#define ML_Ctrl 2
#define ML_PWM 5
#define MR_Ctrl 4
#define MR_PWM 6

#define DISTANCIA_MIN 10
#define DISTANCIA_MAX 25

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
}

void loop() {
  float distancia = leerDistancia();

  if (distancia > 0 && distancia < DISTANCIA_MIN) {
    // Demasiado cerca, retroceder
    atras();
  } else if (distancia > DISTANCIA_MAX) {
    // Demasiado lejos, avanzar
    adelante();
  } else {
    // Distancia correcta, parar
    parar();
  }

  delay(100);
}