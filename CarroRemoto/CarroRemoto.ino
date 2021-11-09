#include <AFMotor.h>
#include <IRremote.h>
#define pinSensor 22
boolean frente = true;
IRrecv sensorIR (pinSensor);
decode_results comando;
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void setup() {
  Serial.begin(9600);
sensorIR.enableIRIn();
Serial.println("sensor ligado");

  motor1.setSpeed(0);// 0 a 255
  motor2.setSpeed(0);
  motor3.setSpeed(0);
  motor4.setSpeed(0);
}

void loop() {
  if(frente == true){
  if (sensorIR.decode(&comando)) {
    Serial.println(comando.value, HEX);
  switch (comando.value){
  case (0xFF18E7): {
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD);
  frente = true;
  break; // FRENTE
  
  }
  }
  switch (comando.value){
  case (0xFF4AB5): {
  motor1.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  motor4.setSpeed(255);
  motor4.run(BACKWARD);
  frente = false;
  break; //TRAS
  
  }
  }
switch (comando.value){
  case (0xFF10EF): {
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(255);
  motor4.run(FORWARD);
  break; // VIRAR ESQUERDA
  }
  }
  switch (comando.value){
  case (0xFF5AA5): {
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
  break;
  }
  }
  
switch (comando.value){
  case (0xFF38C7): {
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
  break; //VIRAR DIREITA
  }
}

  
  
  sensorIR.resume();
  }
  }
  /*
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD);
delay(2000);
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
*/
if(frente == false){
  if (sensorIR.decode(&comando)&& (frente == false)) {
    Serial.println(comando.value, HEX);
  switch (comando.value){
  case (0xFF18E7): {
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD);
  frente = true;
  break; // FRENTE

  }
  }
  switch (comando.value){
  case (0xFF4AB5): {
  motor1.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  motor4.setSpeed(255);
  motor4.run(BACKWARD);
  frente = false;
  break; //TRAS
  
  }
  }
switch (comando.value){
  case (0xFF10EF): {
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(255);
  motor4.run(BACKWARD);
  break; // VIRAR ESQUERDA
  }
  }
  switch (comando.value){
  case (0xFF5AA5): {
  motor1.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
  break;
  }
  }
  
switch (comando.value){
  case (0xFF38C7): {
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
  break; //VIRAR DIREITA
  }
}

  
  
  sensorIR.resume();
  }
}
}
