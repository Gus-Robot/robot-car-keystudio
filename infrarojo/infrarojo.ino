#define IR_IZQUIERDA 11
#define IR_CENTRO 7
#define IR_DERECHA 8

void setup() {
  Serial.begin(9600);
  pinMode(IR_IZQUIERDA, INPUT);
  pinMode(IR_CENTRO, INPUT);
  pinMode(IR_DERECHA, INPUT);
}

void loop() {
  int izquierda = analogRead(IR_IZQUIERDA);
  int centro = analogRead(IR_CENTRO);
  int derecha = analogRead(IR_DERECHA);

  Serial.print("Izq: ");
  Serial.print(izquierda);
  Serial.print(" | Centro: ");
  Serial.print(centro);
  Serial.print(" | Der: ");
  Serial.println(derecha);

  delay(200);
}