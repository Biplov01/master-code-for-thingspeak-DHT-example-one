#include<LiquidCrystal.h>
#include<DHT.h>

int dhtPin = 8;

LiquidCrystal lcd(12,11,5,4,3,2);
DHT dht(dhtPin,DHT11);

void setup() {
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  lcd.setCursor(0,0);
  lcd.print("Temperature: ");
  lcd.setCursor(14,0);
  lcd.print(temp);
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.setCursor(11,1);
  lcd.print(hum);
  delay(1000);
}
