#include <Servo.h>
float c = 0;

Servo servo_22;

void setup()
{
  servo_22.attach(22);
  pinMode(23,INPUT);
}

void loop()
{
  if(digitalRead(23) == HIGH){
    c= (c+0.003);
}
if(c>=190 & digitalRead(23) == HIGH){
  delay(1000);
  c = 0;
}
  
  servo_22.write(c);
}
