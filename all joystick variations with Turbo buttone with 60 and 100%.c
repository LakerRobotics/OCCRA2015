

#pragma config(Motor,  port2,           rightMotor,    tmotorVex269, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393HighSpeed, openLoop)
#pragma config(Motor,  port4,           armMotor,      tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           arm2Motor,  tmotorServoContinuousRotation, openLoop, reversed)





/*--------------------------------------------------------------------------------------------------*\
|*                           - Joystick Control with Arm - 1 Remote -                                *|
|*                                      ROBOTC on VEX 2.0 Cortex                                      *|
|*                                                                                                    *|
|*                                                                                                  *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Ch1 is the X axis and Ch2 is the Y axis for the RIGHT joystick.                             *|
|*    2)  Ch3 is the Y axis and Ch4 is the X axis for the LEFT joystick.                              *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]              [Name]              [Type]              [Description]                   *|
|*    Motor - Port 2          rightMotor           VEX Motor           Right motor                     *|
|*    Motor - Port 3          leftMotor            VEX Motor           Left motor                      *|
|*    Motor - Port 4          armMotor             VEX Motor           Arm motor                       *|
|*    Motor - Port 5          arm2Motor            VEX Motor           Arm Motor                       *|
\*--------------------------------------------------------------------------------------------------*/
//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
    
  while(1 == 1)
 
  {

 
//currently armMotor and arm2Motor are not bieng used in this program and unless we use a //window motor for the carwash arm then we shouldn’t need armMotor or arm2Motor

//NO USE FOR SECOND JOYSTICK UNTIL PNEUMATICS/ELEVATOR LIFT MOTORS ARE 
//ADDED

  float currentpwr = .6;
     
//if the 5U button on the 1st joystick is held, current pwr goes to 100% instead of the normal 60%
    if( vexRT[Btn5U] == 1)
    {
      currentpwr = 1;
    }
 
 
  //driving with RIGHT joystick only (60% drive, with turbo button it’s 100%)
    motor[leftMotor]  = currentpwr*((vexRT[Ch2] + vexRT[Ch1])/2);  // (y + x)/2
    motor[rightMotor] = currentpwr*((vexRT[Ch2] - vexRT[Ch1])/2);  // (y - x)/2
    
 
  //driving with RIGHT joystick only (100% drive no turbo button)
    //motor[leftMotor]  =(vexRT[Ch2] + vexRT[Ch1])/2;  // (y + x)/2
    //motor[rightMotor] = (vexRT[Ch2] - vexRT[Ch1])/2;  // (y - x)/2
    
 //driving with LEFT joystick only, 60% normal pwr, turbo button
      //motor[leftMotor]  = currentpwr*((vexRT[Ch3] + vexRT[Ch4])/2);  // (y + x)/2
      //motor[rightMotor] = currentpwr*((vexRT[Ch3] - vexRT[Ch4])/2);  // (y - x)/2
    
    
//driving with LEFT joystick only, 100% pwr, no turbo button
      //motor[leftMotor]  = (vexRT[Ch3] + vexRT[Ch4])/2;  // (y + x)/2
      //motor[rightMotor] = (vexRT[Ch3] - vexRT[Ch4])/2;  // (y - x)/2
    

//tank drive with 2 joysticks, LEFT motor Left joystick and RIGHT motor RIGHT joystick, 60% pwr, 100% with turbo button
      //motor[leftMotor] = currentpwr*(vexRT[Ch3] / 2);
      //motor[rightMotor] = currentpwr*(vexRT[Ch2] / 2);
    
    
//tank drive with 2 joysticks, LEFT motor Left joystick and RIGHT motor RIGHT joystick, 100% pwr, no turbo button
      //motor[leftMotor] = vexRT[Ch3] / 2;
      //motor[rightMotor] = vexRT[Ch2] / 2;
    
  }
}

