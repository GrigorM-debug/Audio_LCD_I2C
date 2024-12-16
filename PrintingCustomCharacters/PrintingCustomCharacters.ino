#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

byte customChar[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();

  lcd.createChar(0, customChar);
  lcd.setCursor(2, 0);

  lcd.print("I ");
  lcd.write((byte)0);
  
  lcd.print(" programming and technologies!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
