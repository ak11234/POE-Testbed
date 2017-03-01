
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
while the bumpSwitch returns a value of 0
check if the value of the potentiometer is larger than the var biggest
if it is, set biggest to the value of the potentiometer



*/
task main()
{
	int biggest; //declare var biggest

	while (1==1)

	{

		biggest = 0; //init var biggest

		while (SensorValue(bumpSwitch)==0) //while bumpswitch returns 0

		{

			if (SensorValue(potentiometer)>biggest) //if the potentiomenter value is larger than biggest

			{

				biggest=SensorValue(potentiometer); //set biggest to potentiometer

			}

		}

	}


}
