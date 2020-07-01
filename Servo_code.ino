int angle_1=0;
int angle_2=0;
#include <Servo.h>

int pos = 0;

Servo servo_1;
Servo servo_2;
void setup()
{
servo_1.attach(3);
  servo_2.attach(5);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

void loop()
{
  angle_1=analogRead(A2) ;
  angle_1=map(angle_1,0,1023,0,180);
  angle_2=analogRead(A3);
  angle_2=map(angle_2,0,1023,0,180);
  
  
  servo_1.write(angle_1);
  delay(15);// Wait for 1000 millisecond(s)
  servo_2.write(angle_2);
  delay(15); // Wait for 1000 millisecond(s)
}