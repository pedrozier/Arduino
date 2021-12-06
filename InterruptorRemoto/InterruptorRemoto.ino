#include <IRremote.h>
#define pin1 7
#define pinSensor 22
boolean a1;
IRrecv sensorIR (pinSensor);
decode_results comando;
void setup() {
Serial.begin(9600);
sensorIR.enableIRIn();
Serial.println("sensor ligado");

  pinMode(pin1,OUTPUT);
  digitalWrite(pin1,HIGH);
  a1 = false;
  
}

void loop() {
   if (sensorIR.decode(&comando) && a1 == false) {
    Serial.println(comando.value, HEX);
  switch (comando.value){
  case (0xFF38C7): {
    digitalWrite(pin1,LOW);
    a1 = true;
  }
    break;
  }

sensorIR.resume();
}

if (sensorIR.decode(&comando) && a1 == true) {
    Serial.println(comando.value, HEX);
  switch (comando.value){
  case (0xFF38C7): {
    digitalWrite(pin1,HIGH);
    a1= false;
  }
    break;
  }
   
sensorIR.resume();
}


}
