/*9. Define a class Bill and define its member function get() to take detail of customer,
 calculateBill() function to calculate electricity bill using below tariff : 
Upto 100 unit RS. 1.20 per unit From 100 to 200 unit RS. 2 per unit Above 200 units RS. 3 per unit.*/

#include<iostream>
using namespace std;

class Bill
{
    float x;

    public:
    void get()
    {
        float a;
        cout<<"Enter number of units of electricity :";
        cin>>a;
        x=a;
    }
    void calculateBill()
    {
        if(x<=100)
        {
            cout<<"Bill is "<<x*1.2;
        }
        else if(x<=200)
        {
            float temp = 120 + (x-100)*2;
            cout<<"Bill is : "<<temp;
        }
        else if (x>200)
        {
            float temp =320 + (x-200)*3;
            cout<<"Bill is : "<<temp;
        }
    }

};

int main()
{
    Bill b1;
    b1.get();
    b1.calculateBill();
    return 0;
}