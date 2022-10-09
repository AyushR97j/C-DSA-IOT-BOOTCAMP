#include<stdio.h>
int main()
{
    int m,n;
    printf("enter first number");
    scanf("%d",&m);
    printf("enter second number");
    scanf("%d",&n);
    if(m>=n)
    {
        if(m>n)
        {
            printf("%d is greater",m);
        }
        else
        printf("%d",m);
    }
    else
    printf("%d is greater", n);

    return 0;

}