// Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i;
    int largest, secondLargest;
  printf("Enter number of elements: ");
    scanf("%d", &n);
  int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  int max;
    largest = secondLargest = max;
   for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else 
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
   if (secondLargest == max)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is: %d\n", secondLargest);
return 0;
}
