 /*1. Define a class Complex to represent a complex number with instance variables 
 a and b to store real and imaginary parts. Also define following member functions 
 a. void setData(int,int) b. void showData() c. Complex add(Complex)*/

 #include<iostream>
 using namespace std;
 class Complex
 {
    int a,b;

    public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<" + "<<b<<"i";
        cout<<endl;
    }
    Complex add(Complex i)
    {
        Complex temp;
        temp.a = a + i.a;
        temp.b = b + i.b;
        return temp;
    }
 };

 int main()
 {
    Complex c1, c2, c3, c4;
    c1.setData(2,3);
    c2.setData(4,5);
    c3.setData(5,9);

    c4 = c1.add(c2);

    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();

    return 0;

 }