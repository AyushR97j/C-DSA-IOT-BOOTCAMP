#include<stdio.h>
int main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    if(i%5==0)
    printf("Number is divisible by 5");
    else
    printf("Number is not divisible by 5");

    return 0;

}