#include <VarSpeedServo.h>

int joystickx_pin=A7;
int joystickx_val;
VarSpeedServo servo_height;
int servo_height_pin=9;
int servo_height_val;
int speed=40;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(joystickx_pin, INPUT);
  servo_height.attach(servo_height_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  joystickx_val=analogRead(joystickx_pin);
  servo_height_val=(180./1023)*joystickx_val;
  Serial.println(servo_height_val);
  servo_height.write(servo_height_val, speed, false);
  delay(10);
}
