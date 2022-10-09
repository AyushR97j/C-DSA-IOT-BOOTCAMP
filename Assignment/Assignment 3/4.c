#include <stdio.h>

int main()
{
    int m;
    printf("Emter a number");
    scanf("%d",&m);
    if(m/2*2==m)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}