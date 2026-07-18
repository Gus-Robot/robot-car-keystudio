# Sensores IR de seguimiento de línea

Lee el estado de los 3 sensores IR y muestra los valores por el Monitor Serie.

## Qué aprendes
- Este robot tiene 3 sensores IR en lugar de 2 como el Printbot
- Los pines son digitales (7, 8, 11) pero responden mejor con analogRead
- Calibración con potenciómetro azul en cada sensor
- Los LEDs de los sensores se encienden al detectar superficie clara

## Pines usados
- Pin 11 → sensor IR izquierdo
- Pin 7 → sensor IR central
- Pin 8 → sensor IR derecho

## Notas
- digitalRead siempre devuelve 0 — usar analogRead
- Necesita superficie muy contrastada (negro mate / blanco brillante) para mejor detección
