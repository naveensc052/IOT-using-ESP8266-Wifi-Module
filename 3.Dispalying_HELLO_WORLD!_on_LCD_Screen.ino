#include <LiquidCrystal_I2C.h>
#include <Wire.h>
int lcdrows = 2;
int lcdcolumns = 16;
LiquidCrystal_I2C lcd(0x27,lcdcolumns,lcdrows);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop()
{
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Hello World");
  delay(100);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Hello World");
  delay(100);
  lcd.clear();
}
