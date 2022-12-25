/*1. Define a class Complex to represent a complex number. Declare instance member 
variables to store real and imaginary part of a complex number, also define instance 
member functions to set values of complex number and print values of complex number*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
    void setComplex(int x, int y)
    {
        real = x;
        imag= y;
    }
    void printComplex()
    {
        cout<<real<<" + "<<imag<<" i";
        cout<<endl;
    }

};

int main()
{
    Complex c1, c2;
    c1.setComplex(2,3);
    c2.setComplex(8,6);
    c1.printComplex();
    c2.printComplex();

    return 0;

}