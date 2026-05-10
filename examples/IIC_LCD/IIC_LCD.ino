#include <AutoLCD.h>

// Create LCD object (auto I2C scan inside library)
AutoLCD lcd;

void setup() {

  // Start serial (optional debug)
  Serial.begin(115200);

  // Initialize LCD (auto detect I2C address)
  if (!lcd.begin()) {
    Serial.println("LCD not found!");
    while (1);
  }

  // Print initial message using line system
  lcd.printLine(0, "Auto LCD Ready");
  lcd.printLine(1, "IIC Mode Active");
}

void loop() {

  // 👉 You only change this part

  lcd.printLine(0, "Line 1: Hello");
  lcd.printLine(1, "Line 2: World");

  delay(1000);
}
