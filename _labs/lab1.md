---
layout: subpage
title:  "Lab1"
---

# Header

content

```cpp
int potIPT = A0;
int val = 0;

void setup() {
  // setup serial at 9600 baud
  Serial.begin(9600);   
}

// the loop function runs over and over again forever
void loop() {
  val = analogRead(potIPT);     // read the input pin
  Serial.println(val);             // debug value
  // wait half a second
  delay(500);
}
```