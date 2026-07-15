#define ML_Ctrl 2
#define ML_PWM 5
#define MR_Ctrl 4
#define MR_PWM 6

void setup() {
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}

void loop() {
  // Adelante 2 segundos
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 100);
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 100);
  delay(2000);

  // Parar 1 segundo
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  delay(1000);
}