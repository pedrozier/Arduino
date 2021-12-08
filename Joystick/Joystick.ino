
#define pinVRx A1
#define pinVRy A0

////
//const int pinVRx = A1;
//const int pinVRy = A0;
void setup() {
pinMode(pinVRx, INPUT);
pinMode(pinVRy, INPUT);



Serial.begin(9600);

}

void loop() {
int valorVRx = analogRead(pinVRx);
int valorVRy = analogRead(pinVRy);

Serial.print(" Valor VRx: ");
Serial.print(map(valorVRx,0,1024,0,100));

Serial.print(" Valor VRy: ");
Serial.println(map(valorVRy,0,1024,0,100));

}
