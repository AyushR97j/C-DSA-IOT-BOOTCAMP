#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter two number");
    scanf("%d%d",&m,&n);
    printf("Before swapping\nm = %d\nn = %d",m,n);
    int temp = n;
    n = m;
    m=temp;
    printf("\nAfter swapping\nm = %d\nn = %d",m,n);
    

}