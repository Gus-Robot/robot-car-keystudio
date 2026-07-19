# Control Mando IR

Controla el robot con el mando IR — adelante, atrás, girar y parar.

## Qué aprendes
- Combinar librería IRremote con control de motores
- Funciones reutilizables para cada movimiento
- Comparar códigos HEX con operador ==
- El giro pivote necesita más velocidad PWM en suelo que en aire por la fricción

## Controles
| Botón | Acción |
|-------|--------|
| Arriba | Adelante |
| Abajo | Atrás |
| Izquierda | Girar izquierda |
| Derecha | Girar derecha |
| OK | Parar |

## Pines usados
- Pin 3 → receptor IR
- Pin 2 → dirección motor izquierdo
- Pin 5 → velocidad motor izquierdo (PWM)
- Pin 4 → dirección motor derecho
- Pin 6 → velocidad motor derecho (PWM)

## Notas
- Velocidad de giro a 200 PWM para compensar fricción en suelo
- Con pilas el robot tiene mejor tracción y el giro mejora
- Librería IRremote v2.6.0
