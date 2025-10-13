// Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   for(i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
   printf("Reverse of the array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
