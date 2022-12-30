/*2. Write a C++ program to overload unary operators that is increment and decrement.*/

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

    public:
    void SetData(int x, int y)
    {
        real = x;
        imag = y;
    }
    void displayData()
    {
        cout<<real<<" + "<< imag<< " i "<<endl;
    }
    void operator++()
    {
        real = ++real;
        imag = ++imag;
    }
    void operator++(int Dummy)
    {
        real = real++;
        imag = imag++;
    }
    void operator--()
    {
        real = --real;
        imag = --imag;
    }
    void operator--(int Dummy)
    {
        real = real--;
        imag = imag--;
    }
};

int main()
{
    Complex c1;
    c1.SetData(5,6);
    c1.displayData();
    ++c1;
    c1.displayData();
    c1++;
    c1.displayData();
    --c1;
    c1.displayData();
    c1--;
    c1.displayData();

    return 0;
}