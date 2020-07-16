#include <Servo.h>
Servo servo;
int Potentiometer =0;
int Output =0;

void setup()
{
  pinMode(A0, INPUT);
  servo.attach(9);
  
}

void loop()
{
  Potentiometer = analogRead(A0);
  //The potentiometer send values between 0 - 1023
  //We need to set the values of the potentiometer
  //to the values of the servo which is 0 - 180 by mapping it 
  Output = map(Potentiometer, 0, 1023, 0, 180); 
  servo.write(Output);
  delay(20);
  
}