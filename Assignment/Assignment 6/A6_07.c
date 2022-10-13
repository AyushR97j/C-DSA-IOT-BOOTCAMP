#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("Enter a number");
    
    scanf("%d",&n);
    for(i=1;i>=1;i)
    {
        n=n/10;
        ++j;
        if(n<=9)
        {
            if(n==0)
            {
                break;
            }
            else
            {
                ++j;
                break;
            }
        }
    }
    printf("%d digits",j);

    return 0;
    }