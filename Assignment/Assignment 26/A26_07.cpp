/*7. Define a class Box and write a program to enter length, breadth and height and 
initialise objects using constructor also define member functions to calculate volume of the box.*/

#include<iostream>
using namespace std;

class Cube
{
    private:
    int l,b,h;

    public:
    Cube(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void Volume()
    {
        cout<<l*b*h;
    }  
};

int main()
{
    Cube c1(2,3,4);
    c1.Volume();

    return 0;
}