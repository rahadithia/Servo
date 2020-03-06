#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27 ,2,1,0,4,5,6,7,3, POSITIVE);
#define CW 7 //CW is defined as pin #7//
#define CCW 8 //CCW is defined as pin #8//


void setup(){
  pinMode(CW, OUTPUT); //Set CW as an output//
  pinMode(CCW, OUTPUT);
  lcd.begin (16,2); //LCD untuk ukuran 16x2
  }
  
void loop(){  
  lcd.setCursor(3, 0); //baris pertama   
  lcd.print("Rahadithia");    
  lcd.setCursor(2, 1); //baris kedua   
  lcd.print("UIN Jakarta1");
 //Loop runs forever//
  digitalWrite(CW,HIGH); //Motor runs clockwise// 
  delay(3000);            //for 1 second// 
  digitalWrite(CW, LOW); //Motor stops//
  digitalWrite(CCW, HIGH);//Motor runs counter-clockwise// 
  delay(3000);            //For 1 second//
  digitalWrite(CCW, LOW); //Motor stops// 
}
