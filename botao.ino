#define led 4
#define btn 3
int btnon=0;
int btnoff=0;

void itp() {
  if(digitalRead(led)==HIGH){
        digitalWrite(led,LOW);
    }else{
    digitalWrite(led,HIGH);
  }
  }

  void keyup(){
   if((btnon==1) and (btnoff==1)){  
    btnon=0;
    btnoff=0;
    itp();
   }
  }
  

void setup() {
pinMode(led,OUTPUT);
pinMode(btn,INPUT);

}

void loop() {
if(digitalRead(btn)==HIGH){
  btnon=1;
  btnoff=0;
  }else{
btnoff=1;
  }
  keyup();
}
