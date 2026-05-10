#ifndef AutoLCD_h
#define AutoLCD_h

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

class AutoLCD {

  public:

    AutoLCD(uint8_t cols = 16, uint8_t rows = 2);

    bool begin();

    void printLine(uint8_t line, String text);

  private:

    LiquidCrystal_I2C *lcd;
    uint8_t _cols;
    uint8_t _rows;

    byte findAddress();

};

#endif
