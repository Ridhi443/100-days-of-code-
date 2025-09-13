// write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() 
{
   int n,i,sum;
    printf("enter the value of n: ");
    scanf("%d",&n);
    sum=0;
   for (i=1;i<=n;i++)
   sum+=i;
   printf("the sum of n natural numbers is:%d",sum);
 return 0;
}