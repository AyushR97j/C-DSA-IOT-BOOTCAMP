#include<stdio.h>
int main()
{
    
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    for(int i = 1; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,i);
            break;
        }

    }

    return 0;
}