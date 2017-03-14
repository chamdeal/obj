#include <stdio.h>
#include <wiringPi.h>

int main()
{

    wiringPiSetup();
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(0,OUTPUT);
    
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(0,HIGH);
    
    digitalWrite(9,LOW);
    int total = 20;
    int time =total;
    int i;
    int step = 1;
    while(1)
    {
        time -= step;
        for(i=0;i<10;i++)
        {
          digitalWrite(8,LOW);
          delay(time);
          digitalWrite(8,HIGH);
          delay(total-time);
          if(time<=0)
              time=total;
        }   
    }  
    return 0;          
}
