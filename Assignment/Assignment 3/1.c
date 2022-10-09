#include<stdio.h>
int main ()

{
    int x;
    printf("enter a number");
    scanf("%d",&x);

    if(x>0)
    printf("%d is positive",x);
    else
    printf("%d is non positive",x);

    return 0;
}