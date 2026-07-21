# Esquiva Obstáculos

El robot avanza y cuando detecta un obstáculo a menos de 20cm para, mira a izquierda y derecha con el servo y gira hacia el lado con más espacio libre.

## Qué aprendes
- Combinar ultrasonido, servo y motores en un mismo sketch
- Toma de decisiones comparando dos distancias
- El servo como sensor direccional para buscar el mejor camino
- Distancia umbral: 20cm para detectar obstáculo

## Cómo funciona
1. Avanza constantemente
2. Si detecta obstáculo < 20cm → para
3. Mira izquierda (180°) → lee distancia
4. Mira derecha (0°) → lee distancia
5. Vuelve al centro (90°)
6. Gira hacia el lado con más espacio libre

## Velocidades
- Adelante/atrás: PWM 150
- Giro: PWM 200 (más fuerza para compensar fricción)

## Pines usados
- Pin 12 → TRIG ultrasonido
- Pin 13 → ECHO ultrasonido
- Pin A3 → servo
- Pin 2 → dirección motor izquierdo
- Pin 5 → velocidad motor izquierdo (PWM)
- Pin 4 → dirección motor derecho
- Pin 6 → velocidad motor derecho (PWM)
