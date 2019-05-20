#include <LiquidCrystal_I2C.h>
#include <Wire.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);   // 주소, 글자 갯수, 라인 수
//0x27 is the I2C bus address for an unmodified module

byte user_font1[17] = {0x11, 0x0A, 0x04, 0x04, 0x04, 0x0A, 0x11};
byte user_font2[17] = {0x00, 0x0A, 0x1F, 0x1F, 0x0E, 0x04, 0x00}; //하트
byte user_font3[17] = {0x00, 0x04, 0x04, 0x1F, 0x0E, 0x0A, 0x0A}; //뚱이
byte user_font4[17] = {0x00, 0x0E, 0x0E, 0x0E, 0x1F, 0x1F, 0x1F}; // ㅗ


void setup() {

  lcd.init();
  //lcd.begin(16,2);
  lcd.backlight();
  //lcd.setBacklightPin(3, POSITIVE);   //no support
  //lcd.setBacklight(HIGH);
  
}
int a = 0;
void loop() {
  
  lcd.setCursor(0,0);
  lcd.print("Hello, World!");
  lcd.createChar(0, user_font1);   // 0~ 7 까지 영역 폰트 지정
  lcd.createChar(1, user_font2);
  lcd.createChar(2, user_font3);
  lcd.createChar(3, user_font4);
  lcd.setCursor(a,1);
  lcd.write(byte(1));
  a++;
  if(a == 16) a = 0;
  //lcd.setCursor(2,1);
 // lcd.write(byte(1));
 // lcd.setCursor(4,1);
 // lcd.write(byte(2));
//  lcd.setCursor(6,1);
 // lcd.write(byte(3));
  delay(500);
  lcd.clear();
}
