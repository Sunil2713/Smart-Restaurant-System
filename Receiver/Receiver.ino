#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RH_ASK.h> 

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Address 0x27, 16 columns, 2 rows
RH_ASK rf_driver;

void setup() {
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Smart Restaurant!!");
  lcd.setCursor(0, 1);
  lcd.print("Ordering System");
  delay(3000);
  lcd.clear();

  // Initialize RF driver
  rf_driver.init();
}

void loop() {
  uint8_t buf[26];
  uint8_t buflen = sizeof(buf);
  
  if (rf_driver.recv(buf, &buflen))
  {
    buf[buflen] = '\0';
    Serial.println((char*)buf);  // Print received data to Serial Monitor
    
    lcd.clear(); // Clear the LCD before printing new data
    lcd.setCursor(0, 0);
    lcd.print((char*)buf);
    delay(3000); // Wait before clearing the screen again
  }
}