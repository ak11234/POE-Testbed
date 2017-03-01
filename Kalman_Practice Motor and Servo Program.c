
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
Project Title: Motor and Servo practice program
Team Members: POE Curriculum Team
Date: Friday 10 Feb 2017
Task Description: Too long to type out
Pseudocode:
Repeat indefinitely:
Wait for bump
Motors spin half speed
led on
when light sensor above 700, spin servo
stop motors
wait 2 sec
motors spin reverse 2 sec half speed
wait 3 sec
when light sensor less than 400 set servo 120
motors off

*/
void allMotors (int speed){ //Little function I wrote a while ago to change the speed of both motors at once. I'm lazy.
	motor[leftMotor]=speed;
	motor[rightMotor]=speed;
}

task main()
{
	while (true) { //Keep going, and so we have a chance to press the button
		if (SensorValue[bumpSwitch]==1){ //Wait for button
			allMotors(63); //Half speed
			turnLEDOn(green); //Self-explanatory
			while (true){ //Again, keep going so we have a chance to trigger the light sensor
				if (SensorValue[lightSensor]>700){
					motor[servoMotor]=63; //Then set the servo to a value of 63 (half turn)
					allMotors(0);
					wait1Msec(2000);
					allMotors(-63); //Go backwards half speed
					wait1Msec(3000);
					while (true){ //Give a chance for light sensor to be uncovered
						if (SensorValue[lightSensor]<400){
							motor[servoMotor]=120;
							allMotors(0);
							break; //Get out of this while loop and continue
						}
					}
					break; //Get out of this while loop to restart this program.
				}
			}

		}

	}
}
