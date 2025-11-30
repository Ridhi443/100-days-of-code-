// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read k
    printf("Enter k: ");
    scanf("%d", &k);
    
    if (k < 1 || k > n) {
        printf("Invalid k\n");
        return 0;
    }
    
    int kth_smallest;
    int used[n]; 
    for (int i = 0; i < n; i++) {
        used[i] = 0;
    }
    
    for (int count = 0; count < k; count++) {
        int min = INT_MAX;
        int min_index = -1;
        
        
        for (int i = 0; i < n; i++) {
            if (!used[i] && arr[i] < min) {
                min = arr[i];
                min_index = i;
            }
        }
        
        used[min_index] = 1; 
        kth_smallest = min;
    }
    
    printf("The %dth smallest element is: %d\n", k, kth_smallest);
    
    return 0;
}
