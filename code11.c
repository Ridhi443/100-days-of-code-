// write a program to input an integer and check whether it is even or odd using if-else.  
#include <stdio.h>
int main() 
{
   int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
    { 
        printf("number is even");
    }
    else
    { 
        printf("number is odd");
}
return 0;
}