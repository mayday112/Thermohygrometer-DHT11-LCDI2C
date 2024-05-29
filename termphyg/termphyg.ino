#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 13
#define DHTTYPE DHT11
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

float t = 0.0;
float h = 0.0;
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  // initialize the LCD
  lcd.begin();
  dht.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Hello, world!");
}

void loop()
{
  lcd.clear();
  t = dht.readTemperature();
  h = dht.readHumidity();

  if (isnan(t) || isnan(h)) {
    lcd.print("Failed to read ");
    lcd.setCursor(0, 1);
    lcd.print("Temp and Humi");
  }

  if((t < 15 || t > 30) || (h < 50)){
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
  
  //  print temperature
  lcd.setCursor(0, 0);
  lcd.print("Temp :");
  lcd.setCursor(6, 0);
  lcd.print(t);
  lcd.setCursor(12, 0);
  lcd.print("C");
  //  print humidity
  lcd.setCursor(0, 1);
  lcd.print("Humi :");
  lcd.setCursor(6, 1);
  lcd.print(h);
  lcd.setCursor(12, 1);
  lcd.print("%");
  delay(1000);

}
