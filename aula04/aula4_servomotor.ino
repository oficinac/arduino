#include <Servo.h>

Servo meuServo;
int angulo = 0;

void setup(){
  meuServo.attach(3);
    Serial.begin(9600);
}
void loop(){
  for(angulo=0;angulo<180;angulo++){
    meuServo.write(angulo);
    delay(15);
    Serial.println(angulo);
  }
  for(angulo=180;angulo>0;angulo--){
    meuServo.write(angulo);
    delay(15);
    Serial.println(angulo);
  
  }
}
