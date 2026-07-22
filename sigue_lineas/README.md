# Sigue Líneas

El robot sigue una línea negra sobre fondo blanco usando los 3 sensores IR.

## Qué aprendes
- Uso de 3 sensores IR para seguimiento de línea
- Lógica de decisión con múltiples sensores
- Umbral de detección con analogRead
- Diferencia entre sigue líneas con 2 vs 3 sensores

## Cómo funciona
- Sensor izquierdo detecta negro → girar izquierda
- Sensor derecho detecta negro → girar derecha
- Los 3 detectan negro → parar
- Resto → adelante

## Pines usados
- Pin 11 → sensor IR izquierdo
- Pin 7 → sensor IR central
- Pin 8 → sensor IR derecho
- Pin 2 → dirección motor izquierdo
- Pin 5 → velocidad motor izquierdo (PWM)
- Pin 4 → dirección motor derecho
- Pin 6 → velocidad motor derecho (PWM)
