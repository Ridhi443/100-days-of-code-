//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h> 
int main() {
    int num, first, last, digits = 0, temp, newNum;
     printf("Enter a number: ");
    scanf("%d", &num);
     temp = num;
    last = temp % 10;  
     while (temp >= 10) {
        temp = temp/10;
        digits++;
    }
    first = temp;  
    temp = num % (int)pow(10, digits);
    temp = temp / 10;                 
     newNum = last; 
    for (int i = 0; i < digits - 1; i++) 
    newNum = newNum*10; 
    newNum = newNum+temp; 
    newNum = newNum * 10 + first;  
     printf("Number after swapping first and last digit: %d\n", newNum);
     return 0;
}
