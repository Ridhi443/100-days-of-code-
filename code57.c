// Find the sum of array elements.
#include <stdio.h>
int main() 
{
   int n,i,sum=0;
   printf("\n enter the number of elements in the array: ");
   scanf("%d",&n);
   int arr[n];
   printf("\nEnter %d elements: ",n);
   for(i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
       printf("The sum of elements of the array are=%d\n",sum);
     return 0;
}