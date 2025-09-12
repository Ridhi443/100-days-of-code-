// write a program to input two numbers and display their sum, difference, product and quotient.
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter two numbers:");
    scanf("%d%d", &num1 , &num2);
    sum = num1 + num2;
    printf("sum is: %d\n", sum);
   int  difference = num1 - num2;
    printf("difference is: %d\n", difference);
     int product = num1 * num2;
    printf("product is: %d\n", product);
     int quotient = num1 / num2;
    printf("quotient is: %d\n", quotient);
 return 0;
    }