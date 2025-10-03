// Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
 int n;
printf("enter the number: ");
scanf("%d",&n);
int sum=0;
while(n>0) {
int digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("sum of digit is: %d",sum);
return 0;
}