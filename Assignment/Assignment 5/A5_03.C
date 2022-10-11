#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=n;i>=1;i+=2)
        printf("%d\n",i);
    return 0;
}