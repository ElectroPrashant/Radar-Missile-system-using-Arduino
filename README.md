# Construction
This system is made up of-
1) Arduino Uno
2) UtraSonic Sensor HC-SR04
3) Servo Motor SG90 (2x)
4) Acrylic Sheet
5) Display/PC
6) Cylindrical plastic muzzle
7) Plastic cap as Dud Shell
8) Buzzer
9) 18650 Li-on Battery (2x) 
10) 18650 Battery Holder
11) Bread Board
12) Jumper wires and sigle core wires

-Ultrasonic Sensor is attacted to an acrylic sheet as base.
-The Sheet is futher attacted to another servo motor to rotate it.
-A Projectile launcher(3D model in video link) is mounted with an servo mototr as a trigger is Mounted beside Utrasonic sensor.
-A buzzer is introduced in the circuit to work as alarm with utrasonic sensor.
-This system of components is then connecte the Arduino (as shown in Circuit.png).
-Arduino Uno is connected to a PC to show graphic interface of Radar.
-A 9V/12V battery is suggested to be connected to Live and Ground terminal of breadboard because PC USB can only provide 5V.
-Both Arduino and Gui is coded in Arduino IDE and Processing IDE resp.

# Working
This system uses a Ultrasnic sensor to detect any presense in a limited surrounding and use projectile laucher to shoot a object at it.

180-Degree scanning: Ultrasonic sensor attached to the Servo motor rotates it for a full scan of the surrounding.

Graphical user Interface: Real time data is displayed on the PC in a traditional radar Interface which will show the presense and distance of the object in the area.
The Gui is coded in Java Language using Processing IDE.

Alarming: A buzzer is connect to the system to go off when the ultrasonic sensor detects any presense.

Projectile Laucher: The Laucher is coded to shoot a object after the sensor detect a presense and adjusts its position to face the unknown object it detected.
A servo motor is used as trigger which holds back a compressed spring behind a shell.

Operating Power: 2 Servo motor used in the system operates on maximum of 7.2 Voltage, if Arduino is connected to PC to power the system, it may not be enough.
A external Voltage source should be connected to BreadBoard for smooth running of setup.

# Uses
Prototype Development: Serves as a prototype for developing more advanced security or surveillance systems used in Military.

Educational Demonstrations: This project can be used in classrooms or workshops to teach students about the basics of radar technology, object detection, and automated response systems.





