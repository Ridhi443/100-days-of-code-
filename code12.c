// write a program to input an integer and check whether it is positive, negative or zero using nested if-else.  
#include <stdio.h>
int main() 
{
   int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num==0)
    { 
        printf("number is zero");
    }
    else 
    if(num>0)
    { 
        printf("number is positive");
}
else 
if (num<0)
{
    printf("number is negative");
}
return 0;
}