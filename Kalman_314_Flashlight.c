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
Project Title: POE Activity 3.1.4 While and If-Else Loops Part 1
Team Members: POE Curriculum Team
Date: TBD
Section: TBD
Task Description:
Using the Ambient Light Sensor, program the flashlight to turn on when the lights in the
room go out
(or the sensor is blocked), and turn back on when the lights are turned back on, forever.
Pseudocode:
Loop indefinitely with while loop
If light sensor dark then turn flashlight on
If light sensor light then turn flashlight off
*/

task main()
{
	while (true)
	{
		if (SensorValue[lightSensor]>500)
		{
			motor[flashlight]=-127;
		}
		else {
			motor[flashlight]=0;
		}

	}




}
