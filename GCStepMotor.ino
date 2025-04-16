
//#include <Stepper.h>
#include <AccelStepper.h>

// Steps per revolution for your stepper motor
//const int SPR = 64;

// Motor 1 connected to pins 12, 11, 10, 9
AccelStepper storp1(AccelStepper::FULL4WIRE, 8, 9, 10,11);

// Motor 2 connected to pins 8, 7, 6, 5
AccelStepper storp2(AccelStepper::FULL4WIRE, 5, 4, 3,2);

void setup() {


  storp1.setMaxSpeed(300);
  //storp1.setAcceleration(50);
  //storp1.moveTo(storp1.currentPosition() + 4096);
  storp2.setMaxSpeed(300);
  //storp2.setAcceleration(100);
  //storp2.moveTo(storp2.currentPosition() + 4096);
  storp1.setSpeed(-150);
  storp2.setSpeed(150);


}

void loop() {
int t = 0;
  while(t<5){
  storp1.runSpeed();
  storp2.runSpeed();
  t++;
  }
  storp1.setSpeed(150);
  storp2.setSpeed(150);

}