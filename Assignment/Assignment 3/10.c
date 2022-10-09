#include<stdio.h>
int main()
{
int sp,cp, x;
printf("Enter the cost price and selling price respectively: ");
scanf("%d%d",&cp,&sp);
x= sp-cp;
if (x>0)
printf("Profit of %d rs",x);
else if(x==0)
printf("No profit No loss");
else
printf("Loss of %d rs",x);
}