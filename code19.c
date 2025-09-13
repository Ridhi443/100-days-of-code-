// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
 float a,b,c;
 printf("enter the sides of triangle: ");
 scanf("%f%f%f",&a,&b,&c);
 if ((a+b>c && b+c>a && c+a>b)) 
 {
     if (a == b && b == c ) {
 printf("the triangle is equilateral"); }
 else
  if (a == b || b == c || a == c ) {
 printf("the triangle is isosceles"); }
 else
{
 printf("the triangle is scalene"); }
 }
 return 0;
}
