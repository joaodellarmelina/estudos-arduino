#include <LiquidCrystal.h>

int RS = 12;
int EN = 11;
int T4 = 5;
int D5 = 4;
int D6 = 3;
int D7 = 2;

LiquidCrystal lcd(RS, EN, T4, D5, D6, D7);
void setup() {
  lcd.begin(16,2);
  lcd.print("Abrantes");
  lcd.setCursor(1,1);
  lcd.print("Melhor Professor");
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
