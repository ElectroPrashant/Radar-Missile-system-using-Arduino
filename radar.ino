#include <Servo.h>. 

// Defines Tirg and Echo pins of the Ultrasonic Sensor
const int trigPin = 10;
const int echoPin = 11;
// Variables for the duration and the distance
long duration;
int distance;

Servo myServo; // Creates a servo object for controlling the servo motor
Servo myServo2;
bool RocketLaunched = false;
// Function for calculating the distance measured by the Ultrasonic sensor

int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= duration*0.034/2;
  return distance;
}

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600);
  myServo.attach(12); // Defines on which pin is the servo motor attached
  myServo2.attach(13);
}

void loop() {
  // rotates the servo motor from 15 to 165 degrees
  for(int i=15;i<=160;i++){  
  if (distance>10 && distance<300 && RocketLaunched == false) {
   myServo.write(i+15);
   delay(2000);
   myServo2.write(180);
   delay(1000); 
   myServo2.write(0);
   distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree
   RocketLaunched = true;
    }
  else {
  
   myServo.write(i);
   delay(5);
   distance = calculateDistance();
  }  
  
  Serial.print(i); // Sends the current degree into the Serial Port
  Serial.print(","); // Sends addition character right next to the previous value needed later in the Processing IDE for indexing
  Serial.print(distance); // Sends the distance value into the Serial Port
  Serial.print("."); // Sends addition character right next to the previous value needed later in the Processing IDE for indexing
  }
  
  RocketLaunched = false;
  
  // Repeats the previous lines from 165 to 15 degrees
  for(int i=160;i>15;i--){  
  if (distance>10 && distance<300 && RocketLaunched == false) {
   myServo.write(i-15);
   delay(2000);
   myServo2.write(180);
   delay(1000); 
   myServo2.write(0);
   distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree
   RocketLaunched = true;
  }
  else {
  myServo.write(i);
  delay(5);
  distance = calculateDistance();}
  
  Serial.print(i);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
  }
  
  RocketLaunched = false;

}


