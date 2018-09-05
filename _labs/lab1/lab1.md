---
layout: subpage
title:  "Lab1"
---

# Lab 1

In lab 1, we had to construct several simple circuits which integrated with an arduino microcontroller. We then had to program the arduino to perform some interesting task.

The first task was to blink an LED. The arduino contains an on chip LED connected to pin 13 which we can turn on and off using the following code.

```cpp
{% include_relative code/Blink/Blink.ino %}
```

We can also modify the pin number to be any other digital pin and connect an LED to that pin in the following way to blink an external LED.

![Image](images/blink.png)


```cpp
{% include_relative code/PotLed/PotLed.ino %}
```
```cpp
{% include_relative code/PotRead/PotRead.ino %}
```

<iframe width="560" height="315" src="https://www.youtube.com/embed/4hCbVb7QNAI" frameborder="0" allow="autoplay; encrypted-media" allowfullscreen></iframe>
