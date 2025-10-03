// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i, j;
 printf("Enter the value of n: ");
    scanf("%d", &n);
 printf("Prime numbers from 1 to %d are:\n", n);
 for(i = 2; i <= n; i++) {        
        for(j = 2; j < i; j++) {     
            if(i % j == 0) {
                break;              
            }
        }
        if(j == i) {                 
            printf("%d ", i);        
        }
    }
printf("\n");
    return 0;
}
