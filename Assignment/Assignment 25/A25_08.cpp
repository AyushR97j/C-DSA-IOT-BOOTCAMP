/*8. Define a class Rectangle and define an instance member function to find the area of the rectangle.*/

#include<iostream>
using namespace std;

class Rectangle
{
    int l,b;

    public:
        void Input()
        {
            int x, y;
            cout<<"Enter length and breadth\n";
            cin>>x>>y;
            l=x;
            b=y;

            cout<<endl;
        }

        void Area()
        {
            cout<<"Area is "<<l*b;
            cout<<endl;
        }
};

int main()
{
    Rectangle r1, r2;
    r1.Input();

    r1.Area();
    return 0;
}

