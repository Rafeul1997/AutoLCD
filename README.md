# AutoLCD Library

![Status](https://img.shields.io/badge/Status-Active-success) ![Version](https://img.shields.io/badge/Version-1.0.0-blue) ![License](https://img.shields.io/badge/License-MIT-green) ![Arduino](https://img.shields.io/badge/Arduino-Compatible-00979D?logo=arduino&logoColor=white) ![ESP32](https://img.shields.io/badge/ESP32-Supported-red) ![ESP8266](https://img.shields.io/badge/ESP8266-Supported-orange) ![RP2040](https://img.shields.io/badge/RP2040-Pico-pink) ![STM32](https://img.shields.io/badge/STM32-Compatible-blueviolet) ![I2C](https://img.shields.io/badge/Interface-I2C-yellow)

---

## Auto I2C LCD Library

Automatic I2C LCD library for Arduino, ESP32, ESP8266, STM32, RP2040.

---

## Features

- Auto I2C address detection
- Simple line-based printing
- No setCursor needed
- Lightweight and fast

---

## Important Includes

Before using this library, make sure to include:

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <AutoLCD.h>
