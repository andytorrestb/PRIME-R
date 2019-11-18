#include <Servo.h>

// create servo objects to control a servo.
// twelve servo objects can be created on most boards. 
Servo servoA;
Servo servoB;

// variable to store the servo position.
int pos = 0;

void setup()
{
  // attaches the servo on pin 9 to servoA. 
  servoA.attach(9);

  // attaches the servo on pin 8 to servoB.
  servoB.attach(8);
}

void loop()
{
  // goes from 0 degrees to 180 degrees. 
  for (pos = 0; pos <= 180; pos++}
  {
    // in steps of 1 degree 

    // tells servoA go to position in variable 'pos'
    servoA.write(pos);     
    
    // establishes a 1ms delays in between the servos.
    delay(1);                    

    // tells servoB go to position in variable 'pos'
    servoB.write(pos);           

    // wait 15ms for the servo to reach the position
    delay(15);                     
  }

  // goes from 180 degrees to degrees 180
  for (pos = 180; pos >= 0; pos--)
  {
    // works just like the previous loop, but in reverse.
    servoA.write(pos);
    delay(1);
    servoB.write(pos);
    delay(15);
  }
}
