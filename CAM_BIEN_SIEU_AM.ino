#define trigPin 3 // khai báo chân Trig
#define echoPin 2 // khai báo chân Echo
#define greenLed 10 //khai báo chân đèn led
#define yellowLed 9
#define redLed 8

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  if (distance > 25) {
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, HIGH);
    delay(1000);
    digitalWrite(greenLed, HIGH);
    Serial.print("VAT THE NGOAI TAM: ");
    delay(1000);
    
  }
  else if (distance > 10 && distance < 24) {
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(500);
    digitalWrite(yellowLed, LOW);
    Serial.print("VAT THE NGOAI TAM: ");
    delay(500);

  }
  else if (distance < 10) {
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
    delay(250);
    digitalWrite(redLed, HIGH);
    delay(250);
  }
  
  Serial.print("KHOANG CACH DEN VAT THE: ");
  Serial.print(distance);
  Serial.println(" cm");
}

//Nguyễn Duy Tráng
