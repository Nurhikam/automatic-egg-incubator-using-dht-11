#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27 ,16,2);

//DHT Library
#include "DHT.h"
#define DHTPIN 3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const int Relay = 2;

void setup()
{
  Serial.begin(9600);
  lcd.init(); // initialize the lcd
  lcd.backlight();
  dht.begin();
  lcd.setCursor(0,0);
  lcd.print("  ALAT PENETAS  ");
  lcd.setCursor(0,1);
  lcd.print(" TELUR OTOMATIS ");
  delay(5000);
  lcd.clear();
  pinMode(Relay, OUTPUT);
  digitalWrite(Relay, LOW);
}

void loop()
{
  float temp = dht.readTemperature();
  int hum = dht.readHumidity();
  lcd.setCursor(0,0);
  lcd.print("Suhu: ");
  lcd.print(temp);
  lcd.print((char)223);
  lcd.print("C   ");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(hum);
  lcd.print("%  ");
  delay(1000);
 
  if (temp <= 32 )
  {
    digitalWrite(Relay, LOW);
  }
  if (temp >= 33 )
  {
    digitalWrite(Relay, HIGH);
  }
}
