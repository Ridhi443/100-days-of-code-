// Write a program to find the LCM of two numbers.
#include <stdio.h>
int findHCF(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1 - num2;
        else
         num2 = num2 - num1;
    }
    return num1;
}
int main() {
    int num1, num2, hcf, lcm;
 printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
hcf = findHCF(num1,num2);
lcm = (num1 * num2) / hcf;
  printf("LCM of %d and %d = %d\n",num1,num2, lcm);
return 0;
}
