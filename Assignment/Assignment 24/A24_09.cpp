//9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;

void Greatest(int x, int y)
{
    if (x>y)
    cout<<x<< " is greater than "<< y;
    else
    {
    
        cout<<y << " is greater than "<< x;
        cout<< endl;
    }
}

void Greatest(int x, float y)
{
    if (x>y)
    cout<<x<< " is greater than "<< y;
    else
    {
    
        cout<<y << " is greater than "<< x;
        cout<< endl;
    }
}

void Greatest(float x, int y)
{
    if (x>y)
    cout<<x<< " is greater than "<< y;
    else
    {
    
        cout<<y << " is greater than "<< x;
        cout<< endl;
    }
}

void Greatest(float x, float y)
{
    if (x>y)
    cout<<x<< " is greater than "<< y;
    else
    {
    
        cout<<y << " is greater than "<< x;
        cout<< endl;
    }
}
int main()
{
    Greatest(4, 6);
    Greatest(7,9.7f);
    Greatest(4.5f, 6);
    Greatest(5.2f, 3.9f);
    return 0;

}