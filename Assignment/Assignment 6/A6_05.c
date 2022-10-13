#include<stdio.h>
int main()
{
    int i,n,sq=1,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i*i*i;
        printf("Sum of cubes is %d",sum);
    return 0;
}