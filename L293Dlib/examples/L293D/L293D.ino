/*
  L293D
  Turns the motor forward for one second(or 1000ms) then backward
  
  The circuit diagram and the motor driver pinout is there in the L293Dlib folder.
  This example code is in the public domain.
  
  Created 1 January 2020
  by Jaswanth Venkata Sai Chennu
  
*/
#include <L293Dlib.h>                                        //include the L293D library
L293Dlib motor(11,10,9);                                     //(enable pin,IN1 or IN3,IN2 or IN4)

void setup() {
  motor.motorSpeed(150);                                     //set the motor speed
  motor.stopMotor();                                         //stop the motor
}

void loop() {
  delay(1000);                                               //wait for 1 second
  motor.forward();                                           //turn the motor forward
  delay(1000);                                               //wait for 1 second
  motor.backward();                                          //then turn it backward
}
