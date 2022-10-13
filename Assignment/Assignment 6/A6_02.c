#include<stdio.h>
int main()
{
    int i,n,sum=0,x;
    printf("Enter the number n\n ");
    scanf("%d",&n);
    for (i=1,x=2;i<=n;i++,x+=2)
        sum+=x;
        printf("Sum is %d\n",sum);
}