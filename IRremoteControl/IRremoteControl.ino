#include <IRremote.h>
#define pinSensor 22
IRrecv sensorIR (pinSensor);
decode_results comando;

void setup() {
pinMode(32,OUTPUT);
Serial.begin(9600);
sensorIR.enableIRIn();
Serial.println("sensor ligado");
}

void loop() {
  if (sensorIR.decode(&comando)) {
    Serial.println(comando.value, HEX);
  
  switch (comando.value){
  case (0xFF38C7): {
digitalWrite(32,HIGH);
    break;
  }
   
  
 }
sensorIR.resume();
}
}
