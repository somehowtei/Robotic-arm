#include <Servo.h>
int joystickx_length_pin=A7;
int joysticky_length_pin=A6;
float joysticky_length_val;
Servo servo_length;
int servo_length_pin=11;
float servo_length_val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(joysticky_length_pin, INPUT);
  servo_length.attach(servo_length_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  joysticky_val=analogRead(joysticky_length_pin);
  servo_length_val=(180./1023)*joysticky_length_val;
  Serial.println(servo_length_val);
  servo_length.write(servo_length_val);
  delay(10);
}
