// Count even and odd numbers in an array.
#include <stdio.h>
int main() 
{
   int n,i;
   printf("\n enter the number of elements in the array: ");
   scanf("%d",&n);
   int arr[n];
   int evencount=0, oddcount=0;
   printf("\nEnter %d elements: ",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++) {
    if(arr[i]%2==0)
   evencount++;
   else
   oddcount++;
   }
  printf("total even numbers=%d\n",evencount);
  printf("total odd numbers=%d\n",oddcount);
    return 0;
}