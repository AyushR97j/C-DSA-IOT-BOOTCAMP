#include<stdio.h>
int main()
{
int y,leap;
printf("Write any year: ");
scanf("%d",&y);
leap= y%4;
if (leap==0)
printf("Yes %d is leap year",y);
else
printf("No %d is not a leap year",y);
return 0;
}