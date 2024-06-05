/*
   HCSR04Ultrasonic/examples/UltrasonicDemo/UltrasonicDemo.pde

   SVN Keywords
   ----------------------------------
   $Author: cnobile $
   $Date: 2011-09-17 02:43:12 -0400 (Sat, 17 Sep 2011) $
   $Revision: 29 $
   ----------------------------------
   with Buzzer
*/

#include <Ultrasonic.h>

#define TRIGGER_PIN  11
#define ECHO_PIN     10

int buzzer = 13;

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  Serial.print("MS: ");
  Serial.print(microsec);
  Serial.print(", CM: ");
  Serial.print(cmMsec);
  Serial.print(", IN: ");
  Serial.println(inMsec);
  delay(100);
  if (cmMsec < 10) {
    digitalWrite(buzzer,HIGH);
  } else {
    digitalWrite(buzzer,LOW);
  }
}
