/*7. Define a C++ class fraction 
class fraction 
{ 
    long numerator; 
    long denominator; 
  Public: 
    fraction (long n=0, long d=0); 
}
Overload the following operators as member or friend: 
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>*/

#include<iostream>
using namespace std;

class fraction
{
    long numerator; 
    long denominator; 

    public:
    fraction (long n=0, long d=0)
    {
        numerator = 0;
        denominator = 0;
    }

    fraction operator++()//Pre Increment
    {
        fraction temp;
        temp.numerator = ++numerator;
        temp.denominator=++denominator;
        return temp;
    }
    fraction operator++(int Dummy)//Post Increment
    {
        fraction temp;
        temp.numerator = numerator++;
        temp.denominator=denominator++;
        return temp;
    }
    void display()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    friend istream& operator>>(istream &i, fraction &f);
    friend ostream& operator<<(ostream &o, fraction &f);

};

istream& operator>>(istream &i, fraction &f)
{
    cout<<"Numerator   : ";
    cin>>f.numerator;
    cout<<endl;
    cout<<"Denominator : ";
    cin>>f.denominator;
    cout<<endl;
    return i;
}
ostream& operator<<(ostream &o, fraction &f)
{
    cout<<f.numerator<<"/"<<f.denominator<<endl;
    return o;
}

int main()
{
    fraction f1,f2;
    cout<<"Enter 1st Fraction Value"<<endl;
    cin>>f1;
    cout<<"f1++ : ";
    (f1++).display();
    cout<<"++f1 : ";
    (++f1).display();

    cout<<"Enter 2nd Fraction Value"<<endl;
    cin>>f2;
    cout<<"f2=++f1";
    f2=++f1;
    cout<<endl<<"f1 : "<<f1;
    cout<<"f2 : "<<f2;
    cout<<"f2=f1++"<<endl;
    f2=f1++;
    cout<<"f1 : "<<f1;
    cout<<"f2 : "<<f2;


    return 0;
}
