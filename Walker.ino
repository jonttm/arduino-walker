/* 
The Bipedal Humanoid Robot!
By JTTM (Jonathan Currier)
With Ian Abreu & Dyllen Garcia
Version 1.0 Dev 3 - Walking Test

**PLEASE NOTE**
This version is just a test and is not finalized.

Versions:
1.0 - Walking Test

Changelog:
1.0_3 - Trying to debug the walking events.
1.0_2 - Added the first testing code.
1.0_1 - Made the first text and code.

Nothing else here yet.
*/

#include <Servo.h>

Servo lfoot;
Servo lleg;
Servo rleg;
Servo rfoot;

void setup() {
  lfoot.attach(10);
  lleg.attach(9);
  rleg.attach(6);
  rfoot.attach(3);

  lfoot.write(180);
  lleg.write(80);
  rleg.write(75);
  rfoot.write(0);
  delay(1000);

  lleg.write(0);
  delay(3000);
  lfoot.write(0);
  delay(3000);
  lleg.write(80);
  delay(5000);

  rleg.write(180);
  delay(3000);
  lfoot.write(180);
  delay(3000);
  rleg.write(75);
}

void loop() {
  

  
  /*for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }*/
}

