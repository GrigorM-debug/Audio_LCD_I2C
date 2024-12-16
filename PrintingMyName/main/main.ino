#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();

  lcd.setCursor(3, 0);
  lcd.print("Grigor Marinov");
  lcd.setCursor(1, 1);
  lcd.print("Software Engineer");
}

void loop() {
  // put your main code here, to run repeatedly:

}
