// Find the transpose of a matrix.
#include <stdio.h>
int main() 
{
    int rows, cols, i, j;
 printf("Enter number of rows and cols: ");
    scanf("%d%d", &rows, &cols);
  int arr[rows][cols];
  int transpose[cols][rows];
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
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
      transpose[j][i] = arr[i][j];
        }
    }
     printf("transpose of a matrix is = \n");
   for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
      printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
      return 0;
}
