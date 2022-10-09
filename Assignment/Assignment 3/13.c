#include<stdio.h>
int main()
{
int x,c;
printf("Enter any number: ");
scanf("%d",&x);
c=x%6;
if(c==0)
printf("Yes, %d is divisible by 2 and 3",x);
else
printf("No, %d is not divisible by 2 and 3",x);
return 0;

}