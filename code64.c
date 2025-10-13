// Find the digit that occurs the most times in an integer value.
#include <stdio.h>

int main() {
    int  num;
    int count[10] = {0}; 
    int digit, max = 0, mostFrequent = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

   
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

   
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }

    printf("Digit that occurs most: %d (occurs %d times)\n", mostFrequent, max);

    return 0;
}
