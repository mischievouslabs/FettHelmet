
#include <Servo.h> 

int servoPin = 9;
int controlPin = 8; 
Servo servo;

int angle = 90; 
int down = 0;
int servoSpeed = 10;


// Ste up the servo and attach the pin 
void setup() 
{ 
  servo.attach(servoPin);

  // Reset the servo to the 0 position
  servo.write(angle);
} 


void loop()
{
    down = digitalRead(controlPin);
    
    if(angle == 90 && down == 1)
    {
      while(angle != 0)
      {
        servo.write(angle);           
        delay(servoSpeed);
        angle--;       
      }  
    }

    if(angle == 0 && down == 0)
    {
      while(angle != 90)
      {
        servo.write(angle);           
        delay(servoSpeed);
        angle++;       
      }  
    }
}
