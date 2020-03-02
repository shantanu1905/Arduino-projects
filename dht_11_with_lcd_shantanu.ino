#include <LiquidCrystal.h>
#include <dht.h>
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int greenPin = A0;
dht sensor;
 
void setup()
{
  lcd.begin(20,4); //16 by 2 character display
}
 
void loop()
{
  delay(1000); //wait a sec (recommended for DHT11)
  sensor.read11(greenPin);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity = ");
  lcd.print(sensor.humidity);
  lcd.setCursor(0,1);
  lcd.print("Temp = ");
  lcd.print(sensor.temperature);
}
