/* Autonomous program in RobotC made for FIRST Tech Challenge
by Newlyn Joseph, Daniel Wivagg, and Anthony Festa */

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

task main() {
    int a = 0;
    int b = 0;
    int c = 0;
    while(a == 0){
        motor[motorD] = 50;
        motor[motorE] = 50;
        wait1Msec(1000);    //Change value of 1000 to appropriate value to achieve desired distance
        a = a + 1;
    }

}

