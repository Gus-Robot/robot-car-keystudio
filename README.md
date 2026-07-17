# Robot Car Keyestudio 4WD V2.0 - Proyecto de aprendizaje Arduino

Robot Keyestudio 4WD Bluetooth V2.0 (KS0559F) usado como segunda plataforma de aprendizaje de C++ y programación de sistemas embebidos.

## Hardware
- Placa: Keyestudio Plus (compatible Arduino Uno, ATmega328P)
- 4 motores DC con puente H integrado
- Sensor ultrasonido HC-SR04 con servo
- Sensores IR de seguimiento de línea
- Matriz LED 8x16
- Bluetooth integrado
- Control remoto IR

## Sketches
- **blink_car** → parpadeo del LED integrado
- **movimiento** → movimiento básico adelante y parar con motores DC
- **giro** → giro izquierda y derecha combinando dirección y velocidad
- **ultrasonido** → lectura de distancia con HC-SR04 por Monitor Serie

## Herramientas
- Arduino IDE
- avrdude para subir sketches (baudrate 115200)
- Ruta hex: ~/Arduino/nombre_sketch/build/arduino.avr.uno/

## Notas
- En Manjaro el baudrate correcto es 115200
- Ruta de sketches diferente a Ubuntu (/snap/)
