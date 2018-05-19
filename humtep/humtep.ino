#include <LiquidCrystal.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Adafruit_Sensor.h>

const int rs =12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 


#define DHTPIN 7
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int chk;
int hum;
int temp;

void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  dht.begin();
}

void loop() 
{
  delay(2000);
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  lcd.setCursor(0, 0);
  lcd.print("humidity: ");
  lcd.print(hum);
  lcd.print("%");
  lcd.setCursor(0, 2);
  lcd.print("temp: ");
  lcd.print(temp);
  lcd.print(" Celsius");
  
  Serial.print("humidity: ");
  Serial.print(hum);
  Serial.println("%");
  Serial.print("temp: ");
  Serial.print(temp);
  Serial.print(" Celsius");
  delay(10000);
}
