/*1. Define a class Complex with appropriate instance variables and member functions. 
Define following operators in the class: 
a. +
b. -
c. * 
d. ==*/

#include<iostream>
using namespace std;

class Complex
{
    int real,imag;

    public:
    void setData(int x, int y)
    {
        real = x;
        imag = y;
    }
    void showData()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    Complex operator+(Complex m)
    {
        Complex temp;
        temp.real = real + m.real;
        temp.imag= imag + m.imag;
        return temp;
    }
    Complex operator-(Complex m)
    {
        Complex temp;
        temp.real = real - m.real;
        temp.imag= imag - m.imag;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = (real*c.real)+(imag*c.imag);
        temp.imag= (real*c.imag)+(imag*c.real);
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setData(2,3);
    c2.setData(4,5);

    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    int x;
    x=0;
    cout<<x<<endl;

    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    c5.showData();
    

    return 0;
}//lasr one 