#include<stdio.h>
int main()
{
    int x,c;
    printf("Enter any number: ");
    scanf ("%d",&x);
    c= x&1;
    if (c==1)
        printf("odd");
    else
        printf("Even");
    return 0;
}