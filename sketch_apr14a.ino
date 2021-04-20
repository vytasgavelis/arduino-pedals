#include <Joystick.h>

Joystick_ Joystick;

int zAxis_ = 0;         
int Throttle_ = 0;         

const bool initAutoSendState = true; 

void setup()
{
    Joystick.begin();
}
   
void loop(){
 
    zAxis_ = analogRead(A0);  
    zAxis_ = map(zAxis_,0,1023,0,255);
    Joystick.setZAxis(zAxis_);    
  
    Throttle_ = analogRead(A1);
    Throttle_ = map(Throttle_,1023,0,255,0);         
    Joystick.setThrottle(Throttle_);                

    Serial.println(zAxis_);
    Serial.println(Throttle_);

    delay (50);
}
