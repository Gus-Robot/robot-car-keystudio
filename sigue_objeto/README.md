# Sigue Objeto

El robot mantiene una distancia constante con un objeto usando el sensor ultrasonido.

## Qué aprendes
- Lógica de zona de confort con dos umbrales
- Control reactivo: el robot responde continuamente al entorno
- Uso de constantes #define para umbrales ajustables

## Cómo funciona
- Distancia < 10cm → retrocede (demasiado cerca)
- Distancia entre 10-25cm → para (zona de confort)
- Distancia > 25cm → avanza (demasiado lejos)

## Ajustar distancias
Modifica estas líneas para cambiar la zona de confort:
- DISTANCIA_MIN 10 → distancia mínima en cm
- DISTANCIA_MAX 25 → distancia máxima en cm

## Pines usados
- Pin 12 → TRIG ultrasonido
- Pin 13 → ECHO ultrasonido
- Pin 2 → dirección motor izquierdo
- Pin 5 → velocidad motor izquierdo (PWM)
- Pin 4 → dirección motor derecho
- Pin 6 → velocidad motor derecho (PWM)
