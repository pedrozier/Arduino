  #include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,6,7,8,9,10,11,12,13);
long readUltrasonicDistance(int pin)
{
  pinMode(pin, OUTPUT);  
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
 
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
 
  return pulseIn(pin, HIGH);


}

void setup()
{
  pinMode(A5, INPUT);
   lcd.begin(16,2);
  
  
}

void loop()
{
  lcd.clear();
  lcd.print( 0.01723 * readUltrasonicDistance(A5));
  lcd.setCursor(0,2);
  lcd.print( 0.006783 * readUltrasonicDistance(A5));
  lcd.setCursor(14,0);
  lcd.print("CM");
  
  lcd.setCursor(14,2);
  lcd.print("IN");
  
  delay(1000); 
}

