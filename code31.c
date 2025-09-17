// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{ 
    int num;
    int i=0;
   int binary[32];
    printf("\nenter the number: ");
    scanf("%d",&num);
    while (num>0) {
     binary[i]=num%2;
    num=num/2;
    i++;
          }
  printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
 return 0;
}