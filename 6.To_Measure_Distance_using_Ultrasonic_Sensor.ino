#include<NewPing.h>
#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 14
#define MAX_DISTANCE 200
int lcdrows = 2;
int lcdcolumns = 16;
LiquidCrystal_I2C lcd(0x27,lcdcolumns, lcdrows);
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned int uS = sonar.ping_cm();
  Serial.print("DISTANCE:");
  Serial.println(uS);
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("DISTANCE:");
  lcd.print(uS);
  delay(1000);
  lcd.clear();
}
