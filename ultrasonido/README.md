# Sensor Ultrasonido

Lee la distancia en centímetros y la muestra por el Monitor Serie cada 500ms.

## Qué aprendes
- Cómo funciona un sensor ultrasónico HC-SR04
- pulseIn para medir duración de pulsos
- Conversión de duración a distancia: duración * 0.034 / 2
- Variables long y float

## Diferencia con el Printbot
- Mismo código y lógica
- Diferente pines (D12/D13 en lugar de 4/5)
- El sensor funciona correctamente a diferencia del Printbot

## Pines usados
- Pin 12 → TRIG
- Pin 13 → ECHO
