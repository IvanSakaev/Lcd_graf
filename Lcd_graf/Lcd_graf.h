#pragma once
template<typename T>

void write_graf(int x, int y, int len, int num, T _lcd, int sim1 = 0, int sim2 = 1, int sim3 = 2, int sim4 = 3) {
  byte p20[8] = {
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
  };
  byte p40[8] = {
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
  };
  byte p60[8] = {
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
  };
  byte p80[8] = {
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
  };
  _lcd.createChar(sim1, p20);
  _lcd.createChar(sim2, p40);
  _lcd.createChar(sim3, p60);
  _lcd.createChar(sim4, p80);

  int num2 = 0;
  _lcd.setCursor(x, y);
  for (int a = 0; a < len; a++) {
    _lcd.print(" ");
  }
  for (int i = 0; i < len; i++) {
    _lcd.setCursor(i + x, y);
    if ((num - num2) >= 5) {
      _lcd.print("\xFF");
      num2 += 5;
    } else if ((num - num2) == 4) {
      _lcd.write(sim4);
      break;
    } else if ((num - num2) == 3) {
      _lcd.write(sim3);
      break;
    } else if ((num - num2) == 2) {
      _lcd.write(sim2);
      break;
    } else if ((num - num2) == 1) {
      _lcd.write(sim1);
      break;
    } else {
      break;
    }
  }
}