#include <Servo.h>
Servo myServo;
int pos = 0, val = 0;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);                          
}

void loop() {
  val = analogRead(A0);
  Serial.println(val);
  // Range of analog input from LDR
  if(val > 40)  myServo.write(30);
  if(val < 30)  myServo.write(0);
}
