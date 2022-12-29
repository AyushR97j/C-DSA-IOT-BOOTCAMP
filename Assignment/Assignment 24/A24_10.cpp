//10. Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
void Sum(int x, float y)
{
    cout<<x+y<<endl;
}
void Sum(float x, int y)
{
    cout<<x+y<<endl;
}

int main()
{
    Sum(7,6.0f);
    Sum(7.0f,6);
    return 0;
}