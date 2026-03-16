#include <VarSpeedServo.h>
int joysticky_pin=A6;
float joysticky_val;
VarSpeedServo servo_length;
int servo_length_pin=11;
float servo_length_val;
int speed=40;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(joysticky_pin, INPUT);
  servo_length.attach(servo_length_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  joysticky_val=analogRead(joysticky_pin);
  servo_length_val=(180./1023)*joysticky_val;
  Serial.println(servo_length_val);
  servo_length.write(servo_length_val);
  delay(10);
}
