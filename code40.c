// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
   int binary,temp,digit,complement=0;
   int multiplier=1;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    temp=binary;
    while(temp>0) {
    digit=temp%10;
    if(digit==0)
    digit=1;
    else
    digit=0;
    complement=complement+digit*multiplier;
    multiplier=multiplier*10;
    temp=temp/10;
    }
    printf("1's complement: %d\n",complement);
  return 0;
}