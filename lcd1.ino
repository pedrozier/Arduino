#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,6,7,8,9,10,11,12,13);
void setup()
{
lcd.begin(16,2);
}

void loop()
{
  lcd.clear();
  lcd.print("hello world");
  lcd.setCursor(0,2);
  lcd.print("test ok");
    delay(500); 
