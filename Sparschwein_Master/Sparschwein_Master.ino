#include <LiquidCrystal.h>
#define reset 1

float money = 0.00;  // Menge an gespeichertem Geld

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);  // LCD an den genannten Pins

void setup() {
  Serial.begin(9600); // Serielle Schnittstelle für Kommunikation
  pinMode(reset, INPUT);
  lcd.begin(16, 2);  // Initialisierung des LCD's
  lcd.noBlink(); // Blinken ausstellen
  lcd.home();  // Cursor auf erste Position
  lcd.print("Gespartes:");
  lcd.setCursor(0, 1);
  lcd.print(money, 2);
}

void loop() {
  if (Serial.available()) { // Prüfen ob Daten empfangen wurden
    money += Serial.parseFloat(); // Gesendetes Geld dazuaddieren

    lcd.setCursor(0, 1);
    lcd.print("                "); // Nur eine Zeile leeren
    lcd.setCursor(0, 1);
    lcd.print(money, 2);
    lcd.print("€");
  } if (digitalRead(reset)) {
    money = 0; // Geld zurücksetzen

    lcd.setCursor(0, 1);
    lcd.print("                "); // Zeile leeren
    lcd.setCursor(0, 1);
    lcd.print(money, 2); // 0€ reinschreiben
    lcd.print("€");
  }
}
