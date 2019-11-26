//seting up initial position
#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo;
int servoPos =50;
int buttonState = 0; 

// constants won't change. They're used here to
// set pin numbers:
int buttonPin = 6;     // the number of the pushbutton pin
int ledPin =  7;      // the number of the LED pin

// variables will change:
// variable for reading the pushbutton status
//defining pins
void setup()
{
servo1.attach(9);
servo2.attach(8);
servo.attach(10);
// initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}
//int servo rotation loop
void loop()
 {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);

  //rotate from 0 deg to 100 deg for regolith container
for(servoPos=150; servoPos>70; servoPos -=1)
{
  servo1.write(servoPos);
  delay(3);
}
delay(100);
//rotate from 0 deg to 50 deg for launcher unit
for(servoPos=70; servoPos >0; servoPos -=1)
{
  servo2.write(servoPos);
  delay(3);
}
delay(3);
for(servoPos=150; servoPos >70; servoPos -=1)
{
servo.write(servoPos);
delay(3000);
}
 delay(30);
}
 else
 {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}