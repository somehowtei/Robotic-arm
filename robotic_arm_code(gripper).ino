#include <VarSpeedServo.h>
int potentiometer_pin=A0;
int potentiometer_val;
VarSpeedServo servo_gripper;
int servo_gripper_pin=12;
int servo_gripper_val;
int speedgripper=255;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potentiometer_pin, INPUT);
  servo_gripper.attach(servo_gripper_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometer_val=analogRead(potentiometer_pin);
  servo_gripper_val=(180./1023)*potentiometer_val;
  Serial.println(servo_gripper_val);
  if(servo_gripper_val<90)
  {
    servo_gripper.write(servo_gripper_val, speedgripper, false);
  }
  delay(10);
}
