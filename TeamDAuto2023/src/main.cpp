/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       p1                                                        */
/*    Created:      Wed Jan 11 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// RollMotor            motor         1               
// RightDriveMotors     motor_group   2, 3            
// LeftDriveMotors      motor_group   4, 5            
// FingerMotor          motor         6               
// ConveyorMotor        motor         7               
// FlyWheelMotor        motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void move(int feet, int speed) {
  //input is feet, converts to inches, gets radians with arc length, converts to degrees
  float angle = ((feet * 12) / 2.125) * (180/3.14159);
  
  RightDriveMotors.setVelocity(speed, percent);
  RightDriveMotors.spinFor(forward, angle, deg, false);
  LeftDriveMotors.setVelocity(speed, percent);
  LeftDriveMotors.spinFor(forward, angle, deg, true);
}

void turn(int angle, int speed) {
int angleAdjust = angle * 3.6;
RightDriveMotors.setVelocity(speed, percent);
  RightDriveMotors.spinFor(forward, angleAdjust, deg, false);
  LeftDriveMotors.setVelocity(speed, percent);
  LeftDriveMotors.spinFor(reverse, angleAdjust, deg, true);

}

void roller() {
RollMotor.setVelocity(50, percent);
RollMotor.spinFor(forward, 3, seconds);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  turn(45, 20);
  roller();
}
