
#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
#pragma config(Motor,  port10,          leftMotor,     tmotorVex393_HBridge, openLoop)
/*
Project Title: POE Activity 3.1.4 While and If-Else Loops Part 4A
Team Members: POE Curriculum Team
Date: TBD
Section: TBD
Task Description: Make a motor spin.
Make its direction depend on whether the bump switch is
being pressed.
Pseudocode:
Repeat indefinitely:
If bump switch is pessed, start motor forward.
If bump switch is not pressed, start motor in reverse.
*/
task main()
{
	while (true){

		if (SensorValue[bumpSwitch]==0){
			motor[rightMotor]=-127;
		}
		else{
			motor[rightMotor]=127;
		}


	}


}
