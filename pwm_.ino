#define led 3
#define maxx 255
#define minn 0
#define tmp 100

//8bit 255 Δ 0//

void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  for(int i=minn;i<maxx;i++) {
  analogWrite(led,i);// digitalpin(pwm~) = analogpin
  delay(tmp);
  }
    for(int i=maxx;i>minn;i--) {
  analogWrite(led,i);// digitalpin(pwm~) = analogpin
  delay(tmp);
  }
}
