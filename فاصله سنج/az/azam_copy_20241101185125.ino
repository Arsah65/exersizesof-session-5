#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int e=1, t=0, d, s;

void setup() {
  // put your setup code here, to run once:
  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
  lcd.begin(16, 2);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(t, LOW);
  delay(2);
  digitalWrite(t, HIGH);
  delay(10);
  digitalWrite(t, LOW);
  d = pulseIn(e, HIGH);
  s = (d / 2) * 0.0343;
  lcd.setCursor(0, 0);
  lcd.print(s);
  delay(1000);
  lcd.clear();
}
