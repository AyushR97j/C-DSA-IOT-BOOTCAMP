#include<stdio.h>
int main()
{
    int i,n,sq=1,sum=0;
    printf("Enter any number n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i*i;
        printf("Sum of squares is %d",sum);
    return 0;
}