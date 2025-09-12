// write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() 
{
    float r;
    printf("enter the radius: ");
    scanf("%f",&r);
float area=3.14*r*r;
float circumference=2*3.14*r;
printf("area of circle is: %f\n",area);
printf("circumference of circle: %f\n",circumference);
    return 0;
}