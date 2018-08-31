#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;
void setup() {
  // attach servo to pin 3 PWM
  myservo.attach(3);
  // debugging output
  Serial.begin(9600);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 3) {
    myservo.write(pos);          
    delay(500); 
    Serial.print(pos);                     
    Serial.println(" degrees");
  }
  for (pos = 180; pos >= 0; pos -= 3) { 
    myservo.write(pos);              
    delay(500);   
    Serial.print(pos);                    
    Serial.println(" degrees");
  }
}

