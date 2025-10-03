// Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0, factorial, i;
 printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
while (temp > 0) {
        digit = temp % 10;  
        factorial = 1;
 for (i = 1; i <= digit; i++) {
            factorial=factorial*i;
        }
  sum=sum+factorial;        
        temp=temp/10;         
    }
  if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);
 return 0;
}
