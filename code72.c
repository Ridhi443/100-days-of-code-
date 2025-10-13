// Find the sum of all elements in a matrix.
#include <stdio.h>
int main() 
{
    int rows, cols, i, j, sum = 0;
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
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}
