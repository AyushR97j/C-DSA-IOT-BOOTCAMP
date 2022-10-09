#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the sides of a triangle: ");
scanf("%d%d%d",&x,&y,&z);
if (x+y<=z || y+z<=x || z+x<=y)
printf("It is not a valid triangle");
else
printf(" Valid triangle");
return 0;
}