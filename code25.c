// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{ 
    int num1, num2, result;
    char op;
    printf("\nenter first number: ");
    scanf("%d",&num1);
    printf("\nenter second number: ");
    scanf("%d",&num2);
     printf("\nenter an operator(+,-,*,/,%): ");
    scanf(" %c",&op);
    switch (op) {
 case'+':
 result=num1+num2;
 printf("result =%d",result);
 break;
 case'-':
 result=num1-num2;
 printf("result=%d",result);
 break;
 case'*':
 result=num1*num2;
 printf("result =%d",result);
 break;
 case'/':
 result= num1/num2;
 printf("result =%d",result);
 break;
 case'%':
 result = num1%num2;
 printf("result =%d",result);
 break;
 }
 return 0;
}

