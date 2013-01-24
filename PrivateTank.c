#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*--------------------------------------------------------------------------------------------------------*\
|*                                                                                                        *|
|*                                    - Tetrix Simple Tank Drive -                                        *|
|*                                          ROBOTC on Tetrix                                              *|
|*                                                                                                        *|
|*  This program allows you to drive a robot via remote control using the ROBOTC Debugger.                *|
|*  This particular method uses "Tank Drive" where each side is controlled individually like a tank.      *|
|*                                                                                                        *|
|*                                        ROBOT CONFIGURATION                                             *|
|*    NOTES:                                                                                              *|
|*                                                                                                        *|
|*    MOTORS & SENSORS:                                                                                   *|
|*    [I/O Port]              [Name]              [Type]              [Description]                       *|
|*    Port D                  motorD              12V                 Right motor                         *|
|*    Port E                  motorE              12V                 Left motor                          *|
\*---------------------------------------------------------------------------------------------------4246-*/

#include "JoystickDriver.c"

task main()
{
  while(true)                            // Infinite loop:
  {
    getJoystickSettings(joystick);

    motor[motorE] = joystick.joy1_y2 * -1;
    // Motor D is assigned a power level equal to the right analog stick's Y-axis reading.
    motor[motorD] = joystick.joy1_y1 ;        	  // Motor E is assigned a power level equal to the left analog stick's Y-axis reading.

if(joy1Btn(1) == 1)                  // If Joy1-Button1 is pressed:
    {
      motor[motorA] = 100;              // Turn Motor A On at full power
    }
    else                            // If Joy1-Button1 is NOT pressed:
    {
     motor[motorA] = 0;                 // Turn Motor A Off
    }
 

 if(joy1Btn(5) != 0){
 int a = ServoValue [servo1];
 servoChangeRate[servo1] = 10;
 servoTarget(servo1) = a+5;



 }
 if(joy1Btn(7) != 0){
 int b = ServoValue [servo1];
 servoChangeRate[servo1] = 10;
  servoTarget(servo1) = b-5;
}

 if(joy1Btn(4) != 0){
 int c = ServoValue [servo2];
 servoChangeRate[servo2] = 10;
  servoTarget(servo2) = c+5;



}
 if(joy1Btn(6) != 0){
 int d = ServoValue [servo2];
 servoChangeRate[servo2] = 10;
  servoTarget(servo2) = d-5;



}

}}
