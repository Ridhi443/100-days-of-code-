// Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
 int month;
 printf("enter the month number (1-12): ");
 scanf("%d",&month);
 switch (month) {
     case 1:
     printf("january");
     printf("\nit has 31 days");
     break;
     case 2:
     printf("february");
     printf("\nit has 28 days");
     break;
     case 3:
     printf("march");
     printf("\nit has 31 days");
     break;
     case 4:
     printf("april");
     printf("\nit has 30 days");
     break;
     case 5:
     printf("may");
     printf("\nit has 31 days");
     break;
     case 6:
     printf("june");
     printf("\nit has 30 days");
     break;
     case 7:
     printf("july");
     printf("\nit has 31 days");
     break;
     case 8:
     printf("august");
     printf("\nit has 31 days");
     break;
     case 9:
     printf("september");
     printf("\nit has 30 days");
     break;
     case 10:
     printf("october");
     printf("\nit has 31 days");
     break;
     case 11:
     printf("november");
     printf("\nit has 30 days");
     break;
     case 12:
     printf("december");
     printf("\nit has 31 days");
     break;
     default:
     printf("invalid input! enter a number between 1 and 12");
 }
  return 0;
}
