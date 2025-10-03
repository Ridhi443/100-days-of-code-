// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter the num1:");
    scanf("%d",&num1);
    printf("enter the num2:");
    scanf("%d",&num2);
    while (num1 != num2) {
    if (num1>num2) 
    num1=num1-num2;
   else
    num2=num2-num1;
    }
    printf("hcf is: %d",num1);
     return 0;
}