/*1. Define a function to check whether a given number is a Prime number or not.*/
#include<iostream>
using namespace std;

void Prime(int x)
{
    int i,j,count=0;
    for(i=1;i<=(x/2);x++)
    {
        j = x%i;
        if(j==0)
        {
           count = count++;
        }     
    }
    if (count>1)
    {
        cout<<"NOT PRIME";
    }
    else
    {
        cout<<"PRIME";
    }
}

int main()
{
    int m;
    cout<<"Enter a number";
    cin>>m;
    Prime(m);
    return 0;
}