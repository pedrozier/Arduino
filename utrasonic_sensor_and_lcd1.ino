  #include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,6,7,8,9,10,11,12,13);
long readUltrasonicDistance(int pin)
{
  pinMode(pin, OUTPUT);  // Clear the trigger
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  // Sets the pin on HIGH state for 10 micro seconds
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  // Reads the pin, and returns the sound wave travel time in microseconds
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

