/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/

#include<iostream>
using namespace std;

class Cube
{
    private:
    double s;

    public:
    Cube(double x)
    {
        s=x;
    }
    void Volume()
    {
        cout<<"Volume of cube of side "<<s<<" is : "<<(s*s*s);
    }  
};

int main()
{
    Cube c1(4);
    c1.Volume();
}