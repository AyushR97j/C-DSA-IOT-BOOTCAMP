#include<stdio.h>
int main()
{
    int i,number;
    printf("Enter any number: ");
    scanf("%d",&number);
    for (i=1;i<=number;i++)
        printf("%d\n",i*i*i);
    return 0;
}