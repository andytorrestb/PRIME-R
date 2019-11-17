#include <Servo.h>

// creat servo object to control a servo
// twelve servo objects can be created on most boards 
Servo myservo;

// variable to store the servo position
int pos = 0;

void setup()
{
  // attaches the servo on pin 9 to the servo object 
  myservo.attach(9);
}

void loop()
{
  // goes from 0 degrees to 180 degrees 
  for (pos = 0; pos <= 180; pos++}
  {
    // in steps of 1 degree 
    myservo.write(pos);           // tell servo go to position in variable 'pos'
    delay(15);                    // wait 15ms for the servo to reach the position 
  }

  // goes from 180 degrees to degrees 180
  for (pos = 180; pos >= 0; pos--)
  {
    myservo.write(pos);
    delay(15);
  }
}
