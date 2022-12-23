#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10}, sum =0;
    for(int i =0; i<=9;i++)
    {
        sum = sum + a[i];
    }
    cout<<"sum is "<<sum;
    return 0;
}