// write a program to calculate simple and compound interest for given principal,rate and time. 
#include <stdio.h>
#include <math.h>
int main() 
{
   float p,r,t;
    printf("enter the value of principal: ");
    scanf("%f",&p);
    printf("enter the value of rate: ");
    scanf("%f",&r);
    printf("enter the value of time: ");
    scanf("%f",&t);
   float simpleinterest = (p*r*t)/100;
   float compoundinterest = p*(pow((1+r/100),t))-p;
    printf("\nsimpleinterest is=%f",simpleinterest);
    printf("\ncompoundinterest is=%f",compoundinterest);
     return 0;
}