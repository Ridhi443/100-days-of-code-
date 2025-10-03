// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float sum=0;
    int numerator=1;
    int denominator=1;
    for(int i=1;i<=n;i++) {
    sum=sum+(float)numerator/denominator;
    numerator=numerator+2;
    denominator=denominator+2; }
     printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
