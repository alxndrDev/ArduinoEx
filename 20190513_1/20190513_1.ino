#include <LiquidCrystal_I2C.h>
#include <Wire.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);   // 주소, 글자 갯수, 라인 수
//0x27 is the I2C bus address for an unmodified module


void setup() {

  lcd.init();
  //lcd.begin(16,2);
  lcd.backlight();
  //lcd.setBacklightPin(3, POSITIVE);   //no support
  //lcd.setBacklight(HIGH);
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hello, World!");
  delay(200);

}
