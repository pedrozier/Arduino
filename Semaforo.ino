#define ledvm 8
#define leda 9
#define ledvrd 10

void setup() {
  pinMode(ledvm,OUTPUT);
  pinMode(leda,OUTPUT);
  pinMode(ledvrd,OUTPUT);

}
void vermelho(int tm){
  digitalWrite(ledvm,HIGH);
  digitalWrite(leda,LOW);
  digitalWrite(ledvrd,LOW);
  delay(tm*1000);
  }
  void verde(int tm){  
  digitalWrite(ledvm,LOW);
  digitalWrite(leda,LOW);
  digitalWrite(ledvrd,HIGH);
  delay(tm*1000);
  }
  void amarelo(int tm){
  digitalWrite(ledvm,LOW);
  digitalWrite(leda,HIGH);
  digitalWrite(ledvrd,LOW);
  delay(tm*1000);
  }
  
void loop() {
  vermelho(7);
  verde(9);
  amarelo(2);
}
