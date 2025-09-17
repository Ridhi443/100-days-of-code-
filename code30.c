// Write a program to reverse a given number.
#include <stdio.h>
int main()
{ 
    int num;
   int digit;
    int sum=0;
    printf("\nenter the number: ");
    scanf("%d",&num);
    while (num>0) {
     digit=num%10;
    sum=sum*10+digit;
    num=num/10; }
    printf("reverse is=%d",sum);
    return 0;
}