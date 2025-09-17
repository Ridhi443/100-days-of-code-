// Write a program to print the product of the even numbers from 1 to n.
#include <stdio.h>
int main()
{ 
    int i,num;
    int product=1;
    printf("enter the even number: ");
    scanf("%d",&num);
  for( i=2;i<=num;i+=2)
   product*=i;
     printf("product is=%d",product);
 return 0;
}