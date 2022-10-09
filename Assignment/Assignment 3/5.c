#include<stdio.h>
int main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    if(i>99)
    {
        if(i<1000)
        {
            printf("number is a 3-digit number");
        }
        else
        printf("Number is not a 3-digit number");
    }
    else
    printf("Number is not a 3-digit number");

    return 0;

}