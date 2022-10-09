#include<stdio.h>
int main()
{
int D,a,b,c;
printf("Enter the value of a,b and c respectively: ");
scanf("%d%d%d",&b,&a,&c);
D=(b*b)-4*a*c;
if (D>0)
printf("Roots are real and distinct");
else if (D=0)
printf("Roots are imaginary");
else
printf("Roots are real and equal");
return 0;
}