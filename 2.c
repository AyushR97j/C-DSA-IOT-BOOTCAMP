#include<stdio.h>
int main()
{
    int m;
    printf("Enter a number");
    scanf("%d",&m);

    printf("%d",( m-m%10 )/10);
    return 0;

}