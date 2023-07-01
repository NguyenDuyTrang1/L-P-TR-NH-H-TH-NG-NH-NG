BÀI 1: HIỂN THỊ LED 7 THANH




void setup() {
// KHAI BÁO CHÂN SỬ DỤNG LED
// NGUYỄN DUY TRÁNG
pinMode(8, OUTPUT);


pinMode(9, OUTPUT);


pinMode(2, OUTPUT);


pinMode(3, OUTPUT);


pinMode(4, OUTPUT);


pinMode(5, OUTPUT);


pinMode(6, OUTPUT);


pinMode(7, OUTPUT);


digitalWrite(7, 0);


}


void loop() {


// Hiển thị số ‘0’


digitalWrite(8, 1);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 1);


digitalWrite(4, 1);


digitalWrite(5, 1);


digitalWrite(6, 0);


delay(1000);


// Hiển thị số ‘1’


digitalWrite(8, 0);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 0);


digitalWrite(4, 0);


digitalWrite(5, 0);


digitalWrite(6, 0);


delay(1000);


// Hiển thị số ‘2’


digitalWrite(8, 1);


digitalWrite(9, 1);


digitalWrite(2, 0);


digitalWrite(3, 1);


digitalWrite(4, 1);


digitalWrite(5, 0);


digitalWrite(6, 1);


delay(1000);


// Hiển thị số ‘3’


digitalWrite(8, 1);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 1);


digitalWrite(4, 0);


digitalWrite(5, 0);


digitalWrite(6, 1);


delay(1000);


// Hiển thị số ‘4’


digitalWrite(8, 0);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 0);


digitalWrite(4, 0);


digitalWrite(5, 1);


digitalWrite(6, 1);


delay(1000);


// Hiển thị số ‘5’


digitalWrite(8, 1);


digitalWrite(9, 0);


digitalWrite(2, 1);


digitalWrite(3, 1);


digitalWrite(4, 0);


digitalWrite(5, 1);


digitalWrite(6, 1);


delay(1000);


// Hiển thị số ‘6’


digitalWrite(8, 1);


digitalWrite(9, 0);


digitalWrite(2, 1);


digitalWrite(3, 1);


digitalWrite(4, 1);


digitalWrite(5, 1);


digitalWrite(6, 1);


delay(1000);


// Hiển thị số ‘7’


digitalWrite(8, 1);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 0);


digitalWrite(4, 0);


digitalWrite(5, 0);


digitalWrite(6, 0);


delay(1000);


// Hiển thị số ‘8’


digitalWrite(8, 1);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 1);


digitalWrite(4, 1);


digitalWrite(5, 1);


digitalWrite(6, 1);


delay(1000);


// Hiển thị số ‘9’


digitalWrite(8, 1);


digitalWrite(9, 1);


digitalWrite(2, 1);


digitalWrite(3, 1);


digitalWrite(4, 0);


digitalWrite(5, 1);


digitalWrite(6, 1);


delay(1000);




}

