#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.begin(16,2);
  {
       
       lcd.print("System Reset");
       delay(1000);
  }

}
