#include <LiquidCrystal.h>

float money = 0.00;  // Menge an gespeichertem Geld
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);  // LCD an den genannten Pins

void setup() {
  Serial.begin(9600); // Serielle Schnittstelle für Kommunikation

  lcd.begin(16, 2);  // Initialisierung des LCD's
  lcd.noBlink(); // Blinken ausstellen
  lcd.home();  // Cursor auf erste Position
  lcd.print("Gespartes:");
  lcd.setCursor(0, 1);
  lcd.print(money, 2);
}

void loop() {
  if (Serial.available()) { // Prüfen ob Daten empfangen wurden
    money += Serial.parseFloat() // Gesendetes Geld dazuaddieren

    lcd.setCursor(0, 1);
    lcd.print("                "); // Nur eine Zeile leeren
    lcd.setCursor(0, 1);
    lcd.print(money, 2);
  }
}
