// Rotate an array to the right by k positions.
#include <stdio.h>
int main() 
{
   int n,k;
   printf("\n enter the number of elements in the array: ");
   scanf("%d",&n);
   int arr[n];
   int result[n];
   printf("\nEnter %d elements: ",n);
   for(int i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
  printf("\nenter the position to shift(k): ");
  scanf("%d",&k);
  k = k % n;
  for(int i=0;i<n;i++) {
      result[(i + k) % n] = arr[i];
  }
  printf("\nafter right shift: ",k);
  for (int i=0;i<n;i++) {
      printf("%d ",result[i]);
  }
   return 0;
}