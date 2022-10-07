#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter the radius of circle");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("Area of circle is %f having the radius %f",area,radius);
    return 0;
}