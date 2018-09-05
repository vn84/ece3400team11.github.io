---
layout: subpage
title:  "Lab1"
---

# Lab 1

In lab 1, we had to construct several simple circuits which integrated with an arduino microcontroller. We then had to program the arduino to perform some interesting task.

## Task 1: Blink an LED
The first task was to blink an LED. The arduino contains an on chip LED connected to pin 13 which we can turn on and off using the following code:

```cpp
{% include_relative code/Blink_simple/Blink_simple.ino %}
```

We can also modify the pin number to be any other digital pin and connect an LED to that pin in the following way to blink an external LED.

![Image](images/blink.png)

## Task 2: Incorporate a potentiometer

The next task was to read the value of a potentiometer through an analog pin and print the value to the serial monitor. This was accomplishe with the following code:

```cpp
{% include_relative code/PotRead/PotRead.ino %}
```

We then combined the potentiometer and LED circuit to control the brightness of the LED based on the potentiometer value. We used this code to map the analog input value from the potentiometer to a PWM signal:

```cpp
{% include_relative code/PotLed/PotLed.ino %}
```

Here is a demo of the task:
<iframe width="560" height="315" src="https://www.youtube.com/embed/4hCbVb7QNAI" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

## Task 3: Servo control

The third task was to control a continuously rotating servo motor using the arduino servo library.

```cpp
{% include_relative code/Servo/Servo.ino %}
```

Demo:
<iframe width="560" height="315" src="https://www.youtube.com/embed/rcGF211rwNE" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

We then added the potentiometer circuit to control the servo motion based on the potentiometer value:

```cpp
{% include_relative code/Servo/Servo.ino %}
```

Demo:
<iframe width="560" height="315" src="https://www.youtube.com/embed/89UeEeVpefA" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>

## Task 4: Assemble Robot

