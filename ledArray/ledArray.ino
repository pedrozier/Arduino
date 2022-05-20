#define pinVRx A1
#define pinVRy A0

int ledsX[] = {34,36,38,40,42,44};

void setup() {
pinMode(pinVRx, INPUT);
pinMode(pinVRy, INPUT);
for(int i = 0; i<sizeof(ledsX);i++){
  pinMode(ledsX[i],OUTPUT);
}


Serial.begin(9600);

}

void loop() {
int valorVRx = analogRead(pinVRx);
int valorVRy = analogRead(pinVRy);

led(map(valorVRx,0,1023,0,7));
Serial.println(map(valorVRx,0,1023,0,7));

}

void led(int x){
  int i;
  for(i=0;i<x;i++){
    digitalWrite(ledsX[i],HIGH);
    }
  for(i=x;i<6;i++){
    digitalWrite(ledsX[i],LOW);
  }
}
