
# Arduino 4-DOF Robotic Arm

A joystick-controlled **4 Degrees of Freedom (4-DOF) robotic arm** built using Arduino and servo motors.
The system allows intuitive real-time control of the arm’s **base rotation, extension, height, and gripper** using analog inputs.

This project was designed as a **learning platform for robotics, embedded systems, and mechatronics**, demonstrating how multiple servos can be coordinated through analog control.

---

# Demo

Example:



---

# Features

* 4 Degrees of Freedom robotic arm
* Real-time joystick control
* Smooth servo motion using the `VarSpeedServo` library
* Independent control of:

  * Base rotation
  * Arm height
  * Arm extension
  * Gripper
* Simple and low-cost hardware setup
* Easily expandable for automation or wireless control

---

# Hardware Components

* Arduino Nano
* 3x MG996R Servo Motors
* 1x MG90S Servo Motor
* 1x Analog Joystick (2 axes)
* 1x Additional joystick axis
* 1x Potentiometer (gripper control)
* External power supply for servos(2x 18650 Li-ion batteries)
* Step down buck converter 8A
* Robotic arm structure (3D printed)

---

# Pin Configuration

| Function              | Arduino Pin |
| --------------------- | ----------- |
| Gripper Potentiometer | A0          |
| Height Joystick Axis  | A7          |
| Length Joystick Axis  | A6          |
| Base Rotation Axis    | A5          |
| Gripper Servo         | D12         |
| Length Servo          | D11         |
| Height Servo          | D10         |
| Base Servo            | D9          |

---

# Software

The project uses the following Arduino library:

* **VarSpeedServo** – allows speed-controlled servo movement for smoother robotic motion.

Install through the Arduino Library Manager or manually.

---

# System Overview

The Arduino reads analog input signals from joysticks and a potentiometer.
These values range from **0 to 1023** and are mapped to **servo angles (0–180°)**.

Each servo motor controls a different joint of the robotic arm:

* **Base servo** – rotates the entire arm
* **Height servo** – raises or lowers the arm
* **Length servo** – controls forward extension
* **Gripper servo** – opens or closes the claw

The gripper movement is limited to **90°** to protect the mechanism.

---

# Code Structure

Main tasks performed in the program:

1. Read analog input from joysticks and potentiometer
2. Convert analog values to servo angles
3. Control servo motors using `VarSpeedServo`
4. Print values to the serial monitor for debugging

---

# Future Improvements

Possible upgrades for the project:

* Inverse kinematics control
* Bluetooth / WiFi remote control
* Preset positions and motion sequences
* Sensor feedback
* Computer vision integration
* Autonomous object manipulation

---

# Educational Value

This project demonstrates key concepts in:

* Embedded programming
* Robotics control
* Servo motor control
* Analog signal processing
* Mechatronics system integration

---

# License

This project is open-source and available for educational use.

---

# Author

Created by Teodora Dinu
