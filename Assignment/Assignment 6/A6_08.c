#include<stdio.h>
int main()
{
    int i,j=2,k;
    printf("Enter a number");
    scanf("%d",&i);
    do
    {
        k = i%j;
        if(k==0)
        {
            if(j==i)
            {
                printf("Prime");
                break;
            }
            else
            {
                printf("Not prime");
                break;
            }

        }
        j++;
    }while(j<=i);


}