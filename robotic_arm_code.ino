#include <Servo.h>
int potentiometer_pin=A0;
float potentiometer_val;
Servo servo_gripper;
int servo_gripper_pin=12;
float servo_gripper_val;

int joystickx_length_pin=A6;
int joysticky_length_pin=A7;
float joystickx_length_val;
Servo servo_length;
int servo_length_pin=11;
float servo_length_val;

int joystickx_height_pin=A4;
int joysticky_height_pin=A5;
float joystickx_height_val;
Servo servo_height;
int servo_height_pin=10;
float servo_height_val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potentiometer_pin, INPUT);
  servo_gripper.attach(servo_gripper_pin);

  pinMode(joystickx_length_pin, INPUT);
  servo_length.attach(servo_length_pin);

  pinMode(joystickx_height_pin, INPUT);
  servo_height.attach(servo_height_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometer_val=analogRead(potentiometer_pin);
  servo_gripper_val=(180./1023)*potentiometer_val;
  Serial.print(servo_gripper_val);
  Serial.print(" ");
  if(servo_gripper_val<100)
  {
    servo_gripper.write(servo_gripper_val);
  }

  joystickx_length_val=analogRead(joystickx_length_pin);
  servo_length_val=(180./1023)*joystickx_length_val;
  Serial.print(servo_length_val);
  Serial.print(" ");
  servo_length.write(servo_length_val);

  joystickx_height_val=analogRead(joystickx_height_pin);
  servo_height_val=(180./1023)*joystickx_height_val;
  Serial.println(servo_height_val);
  servo_height.write(servo_height_val);
  delay(10);
}
