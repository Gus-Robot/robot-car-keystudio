#include <AIP1640_LED_Matrix.h>

AIP1640_LED_Matrix matrix(A5, A4);

// Cara feliz
byte caraFeliz[8] = {
  0b00111100,
  0b01000010,
  0b10100101,
  0b10000001,
  0b10100101,
  0b10011001,
  0b01000010,
  0b00111100
};

void mostrarPatron(byte patron[]) {
  matrix.clear();
  for (int fila = 0; fila < 8; fila++) {
    for (int col = 0; col < 8; col++) {
      if (patron[fila] & (1 << (7 - col))) {
        matrix.setPixel(col + 4, fila, true); // +4 para centrar
      }
    }
  }
  matrix.update();
}

void setup() {
  matrix.begin();
  matrix.clear();
}

void loop() {
  mostrarPatron(caraFeliz);
  delay(2000);
}