/*3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;

    public:
    friend Complex operator+(Complex c1,Complex c2);
    void setData(int x, int y)
    {
        real =x;
        imag=y;
    }
    void showData()
    {
        cout<<real<<" + "<<imag<<"i "<<endl;
    }
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag= c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(4,6);
    c2.setData(2,3);

    c3=c1+c2;

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;    
}