#include <Servo.h>

Servo motorzin;

#define pinPotenciometro A0

int val;

void setup(){
  motorzin.attach(6);
}

void loop(){
  val = analogRead(pinPotenciometro);
  val = map(val, 0, 1023, 0, 179);
  motorzin.write(val);
  delay(15);
}
