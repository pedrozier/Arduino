#include <Servo.h>

#define pinVRx A1
#define pinVRy A0

Servo servo_22;
Servo servo_23;

  float x = 0;
  float y = 0;

void setup()
{
  pinMode(pinVRx, INPUT);
  pinMode(pinVRy, INPUT);
  servo_22.attach(22);
  servo_23.attach(23);

}

void loop()
{
  
  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  
  x += map(valorVRx,0,1024,-1,2);
  y += map(valorVRy,0,1024,-1,2);

  if(x > 180){
    x = 180;
  } else if(x < 0){
    x = 0;
  }
    if(y > 180){
    y = 180;
  } else if(y < 0){
    y = 0;
  }
  
  servo_22.write(x);
  servo_23.write(y);
  delay(10);
}
