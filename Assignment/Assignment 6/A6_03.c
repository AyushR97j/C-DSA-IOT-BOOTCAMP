#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    printf("Enter Number n: ");
    scanf("%d",&n);
    for (i=1,x=1;i<=n;i++,x+=2)
        sum+=x;
        printf("Sum is %d ",sum);
}