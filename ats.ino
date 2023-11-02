
#include <LiquidCrystal.h>
#define MAINS_SENSOR_PIN A0
#define MAINS_RELAY_PIN A1
#define GENERATOR_RELAY_PIN A2
#define GENERATOR_SWITCH_PIN A3
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  pinMode(MAINS_SENSOR_PIN, INPUT);
  pinMode(MAINS_RELAY_PIN, OUTPUT);
  pinMode(GENERATOR_RELAY_PIN, OUTPUT);
  pinMode(GENERATOR_SWITCH_PIN, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("GOD IS MY LIGHT");
}

void loop() {
  int mainsPower = analogRead(MAINS_SENSOR_PIN);
  
  if (mainsPower > 1000) {
    digitalWrite(MAINS_RELAY_PIN, HIGH);
    digitalWrite(GENERATOR_RELAY_PIN, LOW);
    digitalWrite(GENERATOR_SWITCH_PIN, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Mains     on");
  } else {
    digitalWrite(MAINS_RELAY_PIN, LOW);
    digitalWrite(GENERATOR_RELAY_PIN, HIGH);
    digitalWrite(GENERATOR_SWITCH_PIN, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Generator on ");
  }
}
