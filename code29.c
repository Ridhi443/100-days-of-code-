// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{ 
    int num;
    int i;
    int factorial=1;
    printf("\nenter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    factorial *=i;
    printf("factorial=%d",factorial);
    return 0;
}