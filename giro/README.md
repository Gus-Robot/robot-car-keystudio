# Giro

El robot avanza 2 segundos, para, gira izquierda 1 segundo, para, gira derecha 1 segundo, para y repite.

## Qué aprendes
- El giro se consigue combinando dirección y velocidad de cada motor
- Para girar un motor va hacia adelante (HIGH) y el otro hacia atrás (LOW)
- Diferente velocidad PWM en cada lado afecta al radio de giro
- Giro pivote: un motor adelante y el otro atrás

## Cómo funciona el giro
- Girar izquierda → motor izquierdo LOW+200, motor derecho HIGH+100
- Girar derecha → motor izquierdo HIGH+100, motor derecho LOW+200

## Pines usados
- Pin 2 → dirección motor izquierdo (B)
- Pin 5 → velocidad motor izquierdo (PWM)
- Pin 4 → dirección motor derecho (A)
- Pin 6 → velocidad motor derecho (PWM)
