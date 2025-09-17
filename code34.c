// Write a program to check if a number is prime.
#include <stdio.h>
int main()
{ 
    int num,i,isPrime=1;
    printf("enter the number: ");
    scanf("%d",&num);
  if (num==0 || num==1 )
{
    printf("it is not prime ");
}
else {
for(i=2;i<=num/2;i++) {
if(num%i==0) {
    isPrime=0;
    break;
}
}
if (isPrime==1)
 printf("it is prime");
else
printf("it is not prime");
}
    return 0;
}