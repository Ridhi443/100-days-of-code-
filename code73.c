// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() 
{
    int rows, cols, i, j;
 printf("Enter number of rows and cols: ");
    scanf("%d%d", &rows, &cols);
  int arr[rows][cols];
  printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        
        }
        printf("\n");
    }
    printf("\nsum of rows: \n");
    for(i = 0; i < rows; i++) {
       int sum=0;
        for(j = 0; j < cols; j++) {
         sum = sum + arr[i][j];
        }
     printf("Sum of %d row is = %d\n",i+1, sum);
    }
      return 0;
}
