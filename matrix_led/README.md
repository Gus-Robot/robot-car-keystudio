# Matriz LED 8x16

Muestra una carita feliz centrada en la matriz LED 8x16.

## Qué aprendes
- Control de matriz LED con chip AIP1640 via I2C
- Representar imágenes con bytes en binario (1=LED encendido, 0=apagado)
- Dos bucles for anidados para recorrer filas y columnas
- Operaciones de bits para leer cada píxel del patrón
- Offset +4 en columna para centrar en matriz 8x16

## Librería
AIP1640_LED_Matrix — instalar desde Administrar Bibliotecas

## Pines usados
- Pin A5 → SCL (reloj I2C)
- Pin A4 → SDA (datos I2C)

## Cómo crear patrones
Cada fila es un byte en binario:
- 0b00111100 → ⬛⬛⬜⬜⬜⬜⬛⬛
- 0b01000010 → ⬛⬜⬛⬛⬛⬛⬜⬛
