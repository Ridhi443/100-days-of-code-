// Read and print elements of a one-dimensional array.
#include <stdio.h>
int main() 
{
   int n,i;
   printf("\n enter the number of elements in the array: ");
   scanf("%d",&n);
   int arr[n];
   printf("\nEnter %d elements: ",n);
   for(i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
   printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   printf("\n");
   return 0;
}