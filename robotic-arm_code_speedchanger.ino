#include <VarSpeedServo.h>

int potentiometer_pin=A0;
int potentiometer_val;
VarSpeedServo servo_gripper;
int servo_gripper_pin=12;
int servo_gripper_val;

int joystickx_pin=A7;
int joysticky_pin=A6;
int joystickx_val;
int joysticky_val;
VarSpeedServo servo_length;
int servo_length_pin=11;
int servo_length_val;

int joysticky_base_pin=A5;
int joysticky_base_val;
VarSpeedServo servo_base;
int servo_base_pin=9;
int servo_base_val;

VarSpeedServo servo_height;
int servo_height_pin=10;
int servo_height_val;

int speedjoystick=40;
int speedgripper=255;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(potentiometer_pin, INPUT);
  servo_gripper.attach(servo_gripper_pin);

  pinMode(joysticky_pin, INPUT);
  servo_length.attach(servo_length_pin);

  pinMode(joystickx_pin, INPUT);
  servo_height.attach(servo_height_pin);

  pinMode(joysticky_base_pin, INPUT);
  servo_base.attach(servo_base_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometer_val=analogRead(potentiometer_pin);
  servo_gripper_val=(180./1023)*potentiometer_val;
  Serial.print(servo_gripper_val);
  Serial.print(" ");
  if(servo_gripper_val<90)
  {
    servo_gripper.write(servo_gripper_val,speedgripper, false);
  }

  joysticky_val=analogRead(joysticky_pin);
  servo_length_val=(180./1023)*joysticky_val;
  Serial.print(servo_length_val);
  Serial.print(" ");
  servo_length.write(servo_length_val,speedjoystick,false);

  joystickx_val=analogRead(joystickx_pin);
  servo_height_val=(180./1023)*joystickx_val;
  Serial.print(servo_height_val);
  Serial.print(" ");
  servo_height.write(servo_height_val,speedjoystick,false);
  
  joysticky_base_val=analogRead(joysticky_base_pin);
  servo_base_val=(180./1023)*joysticky_base_val;
  Serial.println(servo_base_val);
  servo_base.write(servo_base_val,speedjoystick,false);

  delay(10);
}
