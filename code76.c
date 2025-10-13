// Check if a matrix is symmetric.
#include <stdio.h>
int main() 
{
    int rows, cols;
    int isSymmetric=1;
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
        for (j=0;j<cols;j++) {
            if(arr[i][j] != arr[j][i]) {
                isSymmetric=0;
                break;
            }
        }
        
    }
        if(isSymmetric)
    printf("The matrix is symmetric.\n"); 
             else
        printf("The matrix is not symmetric.\n");
  return 0;
}
