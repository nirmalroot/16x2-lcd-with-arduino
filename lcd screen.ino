#include <LiquidCrystal.h>
int val;
String msg="led turn on";
String msg1="led turn off";

LiquidCrystal lcd(53, 52, 50, 51, 48, 49);//pins of lcd (RS, E, D4, D5, D6, D7)
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  
}
void loop() {
  val=analogRead(A8);
  Serial.println (analogRead(val));
  
  if (analogRead(val)<294){
  lcd.print(msg1);
  delay(500);
  }  
  else{
  lcd.print(msg);
  delay(500);
  }
  
    lcd.clear();
    delay(600);
}
