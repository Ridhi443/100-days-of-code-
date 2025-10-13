// add two matrix.
#include <stdio.h>
int main() 
{
    int row1,col1,row2,col2;
    printf("\nenter the row1 and col1: ");
    scanf("%d%d",&row1,&col1);
 int arr1[row1][col1];
printf("\nenter the elements of matrix1: \n");
for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
        scanf("%d",&arr1[i][j]);
    }
}
printf("\nmatrix1: \n");
for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
printf("\nenter the row2 and col2: ");
    scanf("%d%d",&row2,&col2);
 int arr2[row2][col2];
printf("\nenter the elements of matrix2: \n");
for(int i=0;i<row2;i++) {
    for(int j=0;j<col2;j++) {
        scanf("%d",&arr2[i][j]);
    }
}
printf("\nmatrix2: \n");
for(int i=0;i<row2;i++) {
    for(int j=0;j<col2;j++) {
        printf("%d ",arr2[i][j]);
    }
    printf("\n");
}
if(row1==row2 && col1==col2) {
int result[row1][col1];
for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
      result[i][j]=arr1[i][j]+arr2[i][j];
    }
}
printf("\nsum of two matrix is: \n");
for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
        printf("%d ",result[i][j]);
    }
    printf("\n");
}
}
else
{
    printf("\n the matrix addition is not possible with this input.please try with correct input\n");
}
 return 0;
}