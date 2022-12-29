//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;

void Area(float rad)
{
    float area = 3.14 * rad*rad;
    cout<<"Area of  circle of radius "<<rad<< " is "<<area;
    cout<<endl;
}

void Area(int l, int b)
{
    float area = l*b;
    cout<<"Area of rectangle of length "<< l<<" & breadth "<<b<< " is "<<area;
    cout<<endl;
}

void Area(int side)
{
    float area = (1.73/4*side*side);
    
    cout<<"Area of equilateral triangle of side "<< side << " is "<<area;
    cout<<endl;
}

int main()
{

    Area(6.0f);
    Area(3,4);
    Area(6);
    return 0;

}