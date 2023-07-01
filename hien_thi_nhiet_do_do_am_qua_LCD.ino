#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 13  // kết nối chân dữ liệu của DHT11 với chân D1 của NodeMCU
#define DHTTYPE DHT11   // loại cảm biến DHT11
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);  // địa chỉ I2C của LCD, 16 ký tự và 2 dòng

void setup() {
  lcd.init();  // khởi tạo màn hình LCD16X2 
  lcd.backlight(); // bật đèn nền màn hình
  dht.begin();  // khởi động cảm biến DHT11
}

void loop() {
  lcd.setCursor(0,0);
  float t = dht.readTemperature(); // đọc nhiệt độ từ cảm biến DHT11
  lcd.print("Temp: ");  // in ra chữ "Temp: " trên dòng 1
  lcd.print(t);  // in ra chữ "Temp: " trên dòng 1
  lcd.setCursor(0,1); 
  float h = dht.readHumidity();  // đọc độ ẩm từ cảm biến DHT11
  lcd.print("Humid: ");  // in ra chữ "Humid: " trên dòng 2
  lcd.print(h);
  
}

//NGUYỄN DUY TRÁNG
