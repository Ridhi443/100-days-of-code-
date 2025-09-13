// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
 float cp,sp,percentage,loss,profit;
 printf("enter cost price: ");
 scanf("%f",&cp);
 printf("enter selling price: ");
 scanf("%f",&sp);
  if (sp>cp) {
 profit=sp-cp;
 percentage=(profit/cp)*100;
 printf("profit=%.f\n",profit);
 printf("profit percentage=%.f%%\n",percentage);
 }
 else 
 if (cp>sp) {
 loss=cp-sp;
 percentage=(loss/cp)*100;
 printf("loss=%.f\n",loss);
 printf("loss percentage =%.f%%\n",percentage);
 }
 else {
     printf("no profit, no loss\n");
 }
  return 0;
}
