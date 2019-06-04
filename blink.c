#include <wiringPi.h>
#include <stdio.h>

#define LEDPIN 0

int main(void)
{
        if(wiringPiSetup() == -1) { //when initialize wiringPi failed, print message to screen
                printf("setup wiringPi failed !\n");
                return -1;
        }

        pinMode(LEDPIN, OUTPUT);
        while(1) {
                digitalWrite(LEDPIN, LOW);   //led on
                printf("led on\n");
                delay(1000);                         // wait 1 sec
                digitalWrite(LEDPIN, HIGH);  //led off
                printf("led off\n");
                delay(1000);                 // wait 1 sec
        }
        return 0;
}