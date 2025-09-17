// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{ 
    int num,digit,temp;
   int sum=0;
    printf("\nenter the number: ");
    scanf("%d",&num);
    temp=num;
    while (num>0) {
     digit=num%10;
    sum=sum*10+digit;
    num=num/10; }
if (sum==temp)
{
    printf("it is palindrome");
}
else
{
    printf("not palindrome");
}
    return 0;
}