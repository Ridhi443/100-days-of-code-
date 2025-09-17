// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{ 
    int num, digit, original, n = 0;
   int sum = 0;
    printf("enter the number: ");
    scanf("%d",&num);
    original = num;
    int temp = num;
    while (temp > 0)
    {
        n++;
        temp = temp / 10;
    }
    temp = num;
    while (temp > 0) {
     digit = temp % 10;
    sum = sum + pow(digit,n);
    temp = temp / 10; }
if (sum == original)
{
    printf("it is an armstrong number");
}
else
{
    printf("it is not an armstrong number");
}
    return 0;
}