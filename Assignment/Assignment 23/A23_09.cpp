#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is greater";
    }
    else if(b>a)
    {
        cout<<b<<" is greater";
    }
    else if(a=b)
    {
        cout<<"Both are equal";
    }
    return 0;

}    