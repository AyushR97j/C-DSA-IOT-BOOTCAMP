#include<stdio.h>
int main()
{
    int m;
    printf("Enter a 3-digit number");
    scanf("%d",&m);
    int i = m%10;
    int j = ((m-m%10)/10)%10;
    int k = (m-(m%100))/100;
    printf("%d",i+j+k);
    

}