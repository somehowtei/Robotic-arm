#include <VarSpeedServo.h>

int joysticky_base_pin=A5;
int joysticky_base_val;
VarSpeedServo servo_base;
int servo_base_pin=9;
int servo_base_val;
int speedjoystick=40;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(joysticky_base_pin, INPUT);
  servo_base.attach(servo_base_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  joysticky_base_val=analogRead(joysticky_base_pin);
  servo_base_val=(180./1023)*joysticky_base_val;
  Serial.println(servo_base_val);
  servo_base.write(servo_base_val,speedjoystick,false);
  delay(10);
}
