#include <Servo.h>

/*Servo myServo;

void setup() {
  myServo.attach(9); // connect to the PWM pin you used
  myServo.write(90); // set to center position
}

void loop() {
  myServo.write(0);   // turn to 0°
  delay(1000);
  myServo.write(180); // turn to 180°
  delay(1000);
  myServo.write(360);
   delay(1000);
  myServo.write(720);
   delay(1000);
  myServo.write(1080);
   delay(1000);
}
*/
Servo myServo;

void setup() {
  myServo.attach(9);
}

void loop() {
  myServo.write(0);      // rotate in one direction
  delay(2000);           // adjust this time to match 2 full spins
  myServo.write(90);     // stop
  while(true);           // stop running
}
