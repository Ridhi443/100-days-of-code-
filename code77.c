// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{
    int rows, cols;
    int distinct=1;
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
    for (i=0;i<rows-1;i++) {
        for (j=rows+1;j<cols;j++) {
            if(arr[i][j] != arr[j][i]) {
                distinct=0;
                break;
            }
        }
        
    }
        if(distinct)
   printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
  return 0;
}
