#include <AutoLCD.h>

// SDA, SCL, columns, rows
AutoLCD lcd(21, 22, 20, 4);  // ESP32 + 20x4 LCD

void setup() {

  Serial.begin(115200);

  if (!lcd.begin()) {
    Serial.println("LCD not found!");
    while (1);
  }

  lcd.printLine(0, "Auto LCD Ready");
  lcd.printLine(1, "20x4 Display");
}

void loop() {

  lcd.printLine(0, "Temp: 28C");
  lcd.printLine(1, "Humidity: 60%");
  lcd.printLine(2, "System OK");
  lcd.printLine(3, "Running...");

  delay(1000);
}
