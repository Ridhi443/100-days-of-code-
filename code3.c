// write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int l,b;
    printf("enter the length: ");
    scanf("%d",&l);
    printf("enter the breadth: ");
    scanf("%d",&b);
   int area=l*b;
   int perimeter=2*(l+b);
    printf("area is: %d\n", area);
   printf("perimeter is: %d\n", perimeter);
    return 0;
    }