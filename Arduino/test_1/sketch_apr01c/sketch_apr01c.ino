#include<LiquidCrystal.h>
#include <Adafruit_Fingerprint.h>
int getFingerprintIDez();
SoftwareSerial mySerial(2, 3);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

#define sw1 15
#define sw2 16
#define sw3 17
#define sw4 18
#define sw5 19
int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
void setup()
{
  pinMode(sw1, INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(sw5,INPUT);
 
  lcd.begin(16, 2);
  
  digitalWrite(sw1, HIGH);
  digitalWrite(sw2, HIGH);
  digitalWrite(sw3, HIGH);
  digitalWrite(sw4, HIGH);
  digitalWrite(sw5, HIGH);
   lcd.clear();
  lcd.setCursor(0,0);

  lcd.print("Please Cast Your");
  lcd.setCursor(0,1);
  lcd.print("Vote ");
   
}
void loop()
{

  
  if(digitalRead(sw1)==0)
  {
     vote1++;
     
      lcd.clear();
      delay(1000);
     lcd.setCursor(16,1); 
     lcd.print("Your Vote is Casted");
     for(int scroll = 0; scroll < 28; scroll++)
     {
      lcd.scrollDisplayLeft();
      delay(250); 
     }
   delay(1000);
  lcd.clear();
  lcd.print("***Thank You***");
  delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
 
  }
  
  while(digitalRead(sw1)==0);
  if(digitalRead(sw2)==0)
  {
    vote2++;
  lcd.clear();
      delay(1000);
     lcd.setCursor(16,1); 
     lcd.print("Your Vote is Casted");
     for(int scroll = 0; scroll < 28; scroll++)
     {
      lcd.scrollDisplayLeft();
      delay(250); 
     }
   delay(3000);
  lcd.clear();
  lcd.print("***Thank You***");
  delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
  }
    while(digitalRead(sw2)==0);
  if(digitalRead(sw3)==0)
  {
    vote3++;
      lcd.clear();
      delay(1000);
     lcd.setCursor(16,1); 
     lcd.print("Your Vote is Casted");
     for(int scroll = 0; scroll < 28; scroll++)
     {
      lcd.scrollDisplayLeft();
      delay(250); 
     }
   delay(3000);
  lcd.clear();
  lcd.print("***Thank You***");
   delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
  }
    while(digitalRead(sw3)==0);
   if(digitalRead(sw4)==0)
   {
    vote4++;
      lcd.clear();
      delay(1000);
     lcd.setCursor(16,1); 
     lcd.print("Your Vote is Casted");
     for(int scroll = 0; scroll < 28; scroll++)
     {
      lcd.scrollDisplayLeft();
      delay(250); 
     }
   delay(3000);
  lcd.clear();
  lcd.print("***Thank You***");
  delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
   }
    while(digitalRead(sw4)==0);
   if(digitalRead(sw5)==0)
   {
     int vote=vote1+vote2+vote3+vote4;
     if(vote)
     {
      if((vote1 > vote2 && vote1 > vote3 && vote1 > vote4))
      {
       lcd.clear();
       lcd.print("TDP Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote2 > vote1 && vote2 > vote3 && vote2 > vote4))
      {
       lcd.clear();
       lcd.print("TRS Wins");
       delay(2000);
       lcd.clear();
      }
      else if((vote3 > vote1 && vote3 > vote2 && vote3 > vote4))
      {
       lcd.clear();
       lcd.print("JSP Wins");
       delay(2000);
       lcd.clear();
       delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
      }
     else if(vote4 > vote1 && vote4 > vote2 && vote4 > vote3)
     {
       lcd.setCursor(0,0);
       lcd.clear();
       lcd.print("OTH Wins");
       delay(3000);
       lcd.clear();
         delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
     }
     
      else if(vote4 > vote1 && vote4 > vote2 && vote4 > vote3)
     {
       lcd.setCursor(0,0);
       lcd.clear();
       lcd.print("OTH Wins");
     delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
     }
     
     else
     {
       lcd.clear();
       lcd.print("   Tie Up Or   ");
       lcd.setCursor(0,1);
       lcd.print("   No Result   ");
       delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
     }
     
    }      
     else 
     {
       lcd.clear();
       lcd.print("No Voting....");
       delay(3000);
    lcd.clear();
   lcd.println("Please Place Your");
  lcd.setCursor(0,1);
  lcd.print("Finger");
     }
     vote1=0;vote2=0;vote3=0;vote4=0,vote=0;
     lcd.clear();
   }
   
}
