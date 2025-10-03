// Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() 
{
   int n,i;
   printf("\n enter the number of elements in the array: ");
   scanf("%d",&n);
   int arr[n];
   int postivecount=0, negativecount=0,zerocount=0;
   printf("\nEnter %d elements: ",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++) {
       if(arr[i]<0)
       negativecount++;
       else
    if(arr[i]>0)
   postivecount++;
   else
   zerocount++;
   }
  printf("total positive numbers=%d\n",postivecount);
  printf("total negative numbers=%d\n",negativecount);
   printf("total zero numbers=%d\n",zerocount);
    return 0;
}