#include <Wire.h>;
#include <LiquidCrystal_I2C.h>;
LiquidCrystal_I2C lcd(0x27,16,2);
//0x27 là địa chỉ màn hình trong bus I2C. Phần này chúng ta không cần phải quá bận tâm vì hầu hết màn hình (20x4,...) đều như thế này!
int Potentiometer = A0;
int Value;
int RedLed= 2;
int YellowLed= 3;
int GreenLed= 5;

void setup() 
{
  lcd.init();       //Khởi động màn hình. Bắt đầu cho phép Arduino sử dụng màn hình
  lcd.backlight();   //Bật đèn nền
  Serial.begin(9600);
  pinMode(Potentiometer,INPUT);
  pinMode(RedLed,OUTPUT);
  pinMode(YellowLed,OUTPUT);
  pinMode(GreenLed,OUTPUT);
}

void loop() 
{
  lcd.setCursor(0,0);
  Value = analogRead(Potentiometer);
  Serial.print("Value read from potentiometer: ");
  Serial.println(Value);
  lcd.print("bien tro = ");
  lcd.println(Value);
  
  if((Value >= 100)&&(Value <= 400))
{
    digitalWrite(RedLed , HIGH);
    digitalWrite(YellowLed , LOW);
    digitalWrite(GreenLed , LOW);
    delay(50);
}
else if((Value >= 401)&&(Value <= 800))
{
    digitalWrite(RedLed , HIGH);
    digitalWrite(YellowLed , HIGH);
    digitalWrite(GreenLed , LOW);
    delay(50);
}

else if((Value >= 801)&&(Value <= 1023))
{
    digitalWrite(RedLed , HIGH);
    digitalWrite(YellowLed , HIGH);
    digitalWrite(GreenLed , HIGH);
    delay(50);
}

else
  { 
    digitalWrite(RedLed , LOW);
    digitalWrite(YellowLed , LOW);
    digitalWrite(GreenLed , LOW);
    delay(50);
}
}

//NGUYỄN DUY TRÁNG
