// write a program to input time in seconds and convert it to hours:minutes:seconds format. 
#include <stdio.h>
int main() 
{
   int time,hours,minutes,seconds;
    printf("enter the time in seconds: ");
    scanf("%d",&time);
    hours = time/3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;
    printf("time is= %d:%d:%d",hours,minutes,seconds);
    return 0;
}