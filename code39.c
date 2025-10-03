// Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
 int n;
 printf("enter the number: ");
scanf("%d",&n);
int product=1;
while (n>0) {
    int digit=n%10;
    if (digit%2 != 0)
product=product*digit;
n=n/10;
}
printf("product of odd  digits of a number is: %d",product);
return 0;
}