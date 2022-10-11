#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter any number");
    scanf("%d",&n);
    for (i=2*n-1;i>=1;i-=2)
    {
        printf("%d\n",i);
    }
}