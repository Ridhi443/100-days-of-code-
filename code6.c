// write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() 
{
    int a,b,num;
    printf("\nenter the value of a and b:");
    scanf("%d%d", &a , &b);
     printf("before swapping: a=%d ,b=%d\n",a,b);
num=a;
a=b;
b=num;
printf("after swapping: a=%d ,b=%d\n" ,a,b);

 return 0;
}

