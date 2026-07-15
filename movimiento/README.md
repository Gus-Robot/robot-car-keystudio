# Movimiento básico

El robot avanza durante 2 segundos, para 1 segundo y repite.

## Qué aprendes
- Control de motores DC con puente H DRV8833
- Diferencia entre pinMode de dirección y PWM de velocidad
- analogWrite vs digitalWrite
- PWM: valor 0-255 controla la velocidad (0=parado, 255=máximo)
- Las 4 ruedas se controlan con 2 pines — A/A1 en paralelo, B/B1 en paralelo

## Diferencia con el Printbot
- Printbot usaba servos con ángulos (0-180°)
- Robot Car usa motores DC con dirección (HIGH/LOW) y velocidad (PWM 0-255)

## Pines usados
- Pin 2 → dirección motor izquierdo (B)
- Pin 5 → velocidad motor izquierdo (PWM)
- Pin 4 → dirección motor derecho (A)
- Pin 6 → velocidad motor derecho (PWM)
