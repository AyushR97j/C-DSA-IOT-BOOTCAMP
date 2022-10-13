#include<stdio.h>
int main()
{
    
    int i, sum=0;
    printf("Enter a number");
    scanf("%d",&i);

    for (int x=1;x<=i;x++)
    sum = sum +x;

    printf("%d",sum);

    return 0;

}