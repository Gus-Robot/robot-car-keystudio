# Control Mando IR

Lee los códigos HEX del mando IR y los muestra por el Monitor Serie.

## Qué aprendes
- Comunicación infrarroja con librería IRremote
- Decodificación de señales IR en formato HEX
- FFFFFFFF indica botón mantenido pulsado (repetición)
- Usar versión 2.6.0 de IRremote (versión 4.x no compatible)

## Librería
IRremote v2.6.0 — instalar desde Administrar Bibliotecas

## Pin usado
- Pin 3 → receptor IR (integrado en la placa)

## Mapa de botones
| Botón | Código HEX |
|-------|-----------|
| Arriba | FF629D |
| Abajo | FFA857 |
| Izquierda | FF22DD |
| Derecha | FFC23D |
| OK | FF02FD |
| 1 | FF6897 |
| 2 | FF9867 |
| 3 | FFB04F |
| 4 | FF30CF |
| 5 | FF18E7 |
| 6 | FF7A85 |
| 7 | FF10EF |
| 8 | FF38C7 |
| 9 | FF5AA5 |
