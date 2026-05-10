#include "AutoLCD.h"
#include <Wire.h>

// Common I2C LCD addresses
const byte addresses[] = {0x27, 0x3F, 0x26, 0x20};

AutoLCD::AutoLCD(uint8_t sda, uint8_t scl, uint8_t cols, uint8_t rows) {

  _sda = sda;
  _scl = scl;

  _cols = cols;
  _rows = rows;

  lcd = nullptr;
}

// Auto detect LCD address
byte AutoLCD::findAddress() {

  for (byte i = 0; i < sizeof(addresses); i++) {

    Wire.beginTransmission(addresses[i]);

    if (Wire.endTransmission() == 0) {
      return addresses[i];
    }
  }

  return 0;
}

bool AutoLCD::begin() {

  // Start I2C with custom pins
  Wire.begin(_sda, _scl);

  byte addr = findAddress();

  if (addr == 0) return false;

  // Use custom screen size here
  lcd = new LiquidCrystal_I2C(addr, _cols, _rows);
  lcd->init();
  lcd->backlight();
  lcd->clear();

  return true;
}

void AutoLCD::printLine(uint8_t line, String text) {

  if (!lcd) return;
  if (line >= _rows) return;

  lcd->setCursor(0, line);

  // clear line
  for (int i = 0; i < _cols; i++) lcd->print(" ");

  lcd->setCursor(0, line);
  lcd->print(text);
}
