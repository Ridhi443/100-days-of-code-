// write a program to convert temperature from celcius to fahrenheit.
#include <stdio.h>
int main() 
{
    int c;
    printf("enter the celcius: ");
    scanf("%d",&c);
int fahrenheit=(c*9/5)+32;
printf("fahrenheit is: %d\n",fahrenheit);
 return 0;
}