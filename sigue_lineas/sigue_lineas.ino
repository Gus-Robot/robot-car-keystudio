#define IR_IZQUIERDA 11
#define IR_CENTRO 7
#define IR_DERECHA 8
#define ML_Ctrl 2
#define ML_PWM 5
#define MR_Ctrl 4
#define MR_PWM 6

void adelante() {
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 150);
  digitalWrite(MR_Ctrl, HIGH);
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
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  pinMode(IR_IZQUIERDA, INPUT);
  pinMode(IR_CENTRO, INPUT);
  pinMode(IR_DERECHA, INPUT);
}

void loop() {
  int izq = analogRead(IR_IZQUIERDA);
  int cen = analogRead(IR_CENTRO);
  int der = analogRead(IR_DERECHA);

  // Valores bajos = negro, valores altos = blanco
  bool lineaIzq = (izq < 100);
  bool lineaCen = (cen < 100);
  bool lineDer = (der < 100);

  if (lineaIzq && !lineaCen && !lineDer) {
    izquierda();
  } else if (!lineaIzq && !lineaCen && lineDer) {
    derecha();
  } else if (lineaIzq && lineaCen && lineDer) {
    parar();
  } else {
    adelante();
  }
}