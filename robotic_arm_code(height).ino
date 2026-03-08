#include <Servo.h>
int joystickx_height_pin=A4;
int joysticky_height_pin=A5;
float joystickx_height_val;
Servo servo_height;
int servo_height_pin=10;
float servo_height_val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(joystickx_height_pin, INPUT);
  servo_height.attach(servo_height_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  joystickx_height_val=analogRead(joystickx_height_pin);
  servo_height_val=(180./1023)*joystickx_height_val;
  Serial.println(servo_height_val);
  servo_height.write(servo_height_val);
  delay(10);
}
