/*8. Define a class Bank and define member functions to read principal , rate of interest 
and year. Another member functions to calculate simple interest and display it. 
Initialise all details using constructor.*/

#include<iostream>
using namespace std;

class Bank
{
    float p;
    float r;
    int t;
    float si;

    public:
    Bank(float P, float R, int Y)
    {
        p=P;
        r=R;
        t=Y;
    }
    void showData()
    {
        cout<<"Principal is : "<<p<<endl;
        cout<<"rate of interest is : "<<r<<endl;
        cout<<"time is : "<<t<<endl;
    }
    void calculateSI()
    {
        si = p*r*t/100;
    }
    void displayInterest()
    {
        cout<<"Simple Interest is : "<<si;
    }


};

int main()
{
    Bank b1(100.0f,5.6f,5);
    b1.showData();
    b1.calculateSI();
    b1.displayInterest();

    return 0;
}
