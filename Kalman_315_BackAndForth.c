
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
repeat 20 times
run motor back 0.5 second
run motor forward 0.5 seconds



*/
task main()
{
	int motorCount=0; //init var
	while(motorCount<20){ //until its happened 20 times
		motor[rightMotor]=127; //forward
		wait1Msec(500); //pause 500 mSec
		motor[rightMotor]=-127; //back
		wait1Msec(500); //pause
		motor[rightMotor]=0;//stop
		motorCount++; //increment var --shorthand for "motorCount = motorCount + 1;"

	}

}
