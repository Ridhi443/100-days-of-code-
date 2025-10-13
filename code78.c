// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() 
{
    int rows, cols;
    int sum=0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
 int arr[rows][cols];
    int i,j;
 printf("Enter elements of the matrix:\n");
    for( i = 0; i < rows; i++) {
        for( j = 0; j < cols; j++) {
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
    for (i=0;i<rows;i++) {
    sum= sum+arr[i][j];
            }
   printf("sum of main  diagonal elements: %d\n",sum);
  return 0;
}
