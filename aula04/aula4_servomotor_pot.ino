#include <Servo.h>

Servo meuServo;
int potenciometro = A0;
int angulo;

void setup() {
  meuServo.attach(3);
}

void loop() {
  angulo = analogRead(potenciometro);
  angulo = map(angulo, 0, 1023, 0, 180);
  meuServo.write(angulo);
  delay(15);
}
