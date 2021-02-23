#include "LiquidCrystal_I2C.h"
#include "Lcd_graf.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  write_graf(0, 0, 16,     47,     lcd);
  //         x  y  length  number  lcd
}

void loop() {
}
