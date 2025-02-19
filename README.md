# L293D-library-arduino

A simple library for the L293D motor driver.

# Documentation

## Definition
Description:
creating an object

Syntax:
`L293Dlib motor(Enable Pin, IN1 or IN3 Pin, IN2 or IN4 Pin)`

Parameters:
1. Enable Pin: Arduino pin no. to which the enable pin of L293D is connected
2. IN1 or IN3 Pin: Arduino pin no. to which the IN1 or IN3 pin of L293D is connected
3. IN2 or IN4 Pin: Arduino pin no. to which the IN2 or IN4 pin of L293D is connected

## motorSpeed()
Description:
sets the speed of the motor.

Syntax:
`motor.motorSpeed(speed)`

Parametres:
speed:the speed of the motor between 0 to 255.

Returns:
nothing(void).


## forward()
Description:
turns the motor forward.

Syntax:
`motor.forward()`

Returns:
nothing(void).


## backward()
Description:
turns the motor backward.

Syntax:
`motor.backward()`

Returns:
nothing(void).


# stopMotor():
Description:
stops the motor.

Syntax:
`motor.stopMotor()`

Returns:
nothing(void).

# Circuit:

![Circuit](/L293Dlib/Circuit_Diagram.jpg)



# Pinout:

![Pinout](/L293Dlib/L293D_Pinout.jpg)
