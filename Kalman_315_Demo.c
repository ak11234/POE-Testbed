
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
Project Title: 315
Team Members: POE Curriculum Team
Date:
Task Description: Too long to type out
Pseudocode:
Repeat while the value of var motorCount is less than three
spin motor for two seconds
wait 2 sec
increases count of var motorCount


*/
task main()
{
	int motorCount;

	motorCount = 0;

	while (motorCount < 3)

	{

		startMotor(rightMotor, 95);

		wait(2);

		stopMotor(rightMotor);

		wait(2);

		motorCount = motorCount + 1;

	}


}
