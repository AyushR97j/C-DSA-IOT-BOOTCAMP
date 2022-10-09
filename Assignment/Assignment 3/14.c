#include<stdio.h>
int main()
{
int x,c,d;
printf("Enter any number: ");
scanf("%d",&x);
c=x%7;
d=x%3;
if(c==0)
printf("%d is divisible by 7 or divisible by 3",x);
else if (d==0)
printf("%d is divisible by 7 or divisible by 3",x);
else
printf("%d is not divisible by 7 or 3",x);
return 0;
}