---
layout: subpage
title:  "Lab1"
---

# Lab 1

In lab 1, we had to construct several simple circuits which integrated with an arduino microcontroller. We then had to program the arduino to perform some interesting task.

## Task 1 - Blinking the Internal LED:
The first task was to use the arduino to blink an internal LED. The on-chip LED is hard-wired to pin 13 which we can control using the following code:

```cpp
{% include_relative code/Blink_simple/Blink_simple.ino %}
```

Demo:
<iframe width="560" height="315" src="https://www.youtube.com/embed/FUZXOQbeATo" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

## Task 2 - Blinking an External LED:
Our next task was to modify the code for task one to blink an external LED. We did this by connecting an external LED to a digital pin through a resistor as shown in the diagram below and modified the pin number in the code as follows:

![Image](images/blink.png)

```cpp
{% include_relative code/Blink_simple/Blink_simple.ino %}
```

The resistor was used to prevent sourcing too much current through the pin in case of a short circuit, which would burn out both the Arduino and the external LED.

Demo:
<iframe width="560" height="315" src="https://www.youtube.com/embed/RYbxh-uWJU4" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

## Task 3 - Reading an Analog Input:

Our third task was to detect changes in the resistance value of a potentiometer through an analog input pin and print the value to the serial monitor. This was accomplished by setting up a voltage divider circuit as shown below and connection the output of the circuit to an analog pin:

*Circuit Diagram needed*

We then used the following code to read the analog value of the of the pin and output it to the serial monitor every half second:

```cpp
{% include_relative code/PotRead/PotRead.ino %}
```

## Task 4 - Outputting an Analog Signal:

Combining the setups of Tasks 2 & 3, we designed the following circuit which allowed us to use the analog signal input from the potentiometer to control the brightness of the external LED:

*Circuit Diagram needed*

The LED could only be connected to one of the 7(?) digital pins which could output a PWN signal, which was required to simulate the effect of an analog voltage. The code we wrote for this task is shown below:

```cpp
{% include_relative code/PotLed/PotLed.ino %}
```

Demo:
<iframe width="560" height="315" src="https://www.youtube.com/embed/4hCbVb7QNAI" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

## Task 5 - Controlling Parallax Servos:

Our final task before assembling our robot was to use the PWM signal we generated in the previous task to drive and control a Parallax Continuous Rotation Servo. We did this using the Arduino Servo.h library and writing the following code to attach our servo to a PWM capable pin and output the analog voltage of the potentiometer setup through this pin to control the speed and direction of the servo:

```cpp
{% include_relative code/ServoPot/ServoPot.ino %}
```

Demo:
<iframe width="560" height="315" src="https://www.youtube.com/embed/89UeEeVpefA" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

## Task 6: Assemble Robot

