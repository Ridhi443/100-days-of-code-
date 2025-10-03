// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float sum=0;
    int numerator=2;
    int denominator=3;
    for(int i=1;i<=n;i++) {
    sum=sum+(float)numerator/denominator;
    numerator=numerator+2;
    denominator=denominator+4; }
     printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}