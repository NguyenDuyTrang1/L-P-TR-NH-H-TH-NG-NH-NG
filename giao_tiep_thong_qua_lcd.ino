#include <LiquidCrystal.h>

#include <Wire.h>;
#include <LiquidCrystal_I2C.h>;
LiquidCrystal_I2C lcd(0x27,16,2);
//0x27 là địa chỉ màn hình trong bus I2C. Phần này chúng ta không cần phải quá bận tâm vì hầu hết màn hình (20x4,...) đều như thế này!
//16 là số cột của màn hình (nếu dùng loại màn hình 20x4) thì thay bằng 20
//2 là số dòng của màn hình (nếu dùng loại màn hình 20x4) thì thay bằng 4

void setup(){
lcd.init();       //Khởi động màn hình. Bắt đầu cho phép Arduino sử dụng màn hình
lcd.backlight();   //Bật đèn nền
}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("NGUYEN DUY TRANG");// viet chu o dong 1 cot dau
  lcd.setCursor(0,1);
  lcd.print("705114037 - SPKT");// viet chu o dong 2
  delay(2000);
  lcd.clear();//Xóa màn hình
  delay(300);
}

//NGUYỄN DUY TRÁNG
