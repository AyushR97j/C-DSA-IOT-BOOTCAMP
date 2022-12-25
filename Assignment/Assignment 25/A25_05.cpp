/*Define a class ReverseNumber and define an instance member function to find 
Reverse of a Number using class*/

#include<iostream>
using namespace std;

class ReverseNumber
{
    int a;

    public:
    void set()
    {
        int x;
        cout<<"Enter a number";
        cin>>x;
        a=x;
        //cout<<endl;
    }
    void Reverse()
    {
        while(a>0)
        {
            int r = 0;
            r = a%10;
            a=a/10;
            cout<<r;
        }
    }
};

int main()
{
    ReverseNumber a;
    a.set();
    a.Reverse();

    return 0;
}