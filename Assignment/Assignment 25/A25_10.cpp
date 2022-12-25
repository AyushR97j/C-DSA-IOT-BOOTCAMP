/*10. Define a class Area and define instance member functions to find the area of the 
different shapes like square, rectangle , circle etc.*/

#include<iostream>
using namespace std;

class Area
{
    //float l,b,r;

    public:
    void AreaSquare(float s)
    {
        cout<<"Area of square is "<<s*s;
        cout<<endl;
    }

    void AreaRectangle(float l, float b)
    {
        cout<<"Area of rectangle is "<<l*b;
        cout<<endl;
    }

    void AreaCircle(float r)
    {
        cout<<"Area of circle is "<<3.14*r*r;
        cout<<endl;
    }

};

int main()
{
    Area s1,r1,c1;
    s1.AreaSquare(4);
    r1.AreaRectangle(4,7);
    c1.AreaCircle(3);


    return 0;
}