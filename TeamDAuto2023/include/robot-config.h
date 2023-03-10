using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor RollMotor;
extern motor_group RightDriveMotors;
extern motor_group LeftDriveMotors;
extern motor FingerMotor;
extern motor ConveyorMotor;
extern motor FlyWheelMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );