/*5. Define a class Date and write a program to Display Date and initialise date object using Constructors.*/

#include<iostream>
using namespace std;

class Date
{
    int d,m,y;

    public:    
    Date(int i, int j, int k)
    {
        d=i;
        m = j;
        y =k;
    }

    void DisplayDate()
    {
        cout<<"Date is : "<< d<<"/"<<m<<"/"<<y;
    }
    
};

int main()
{
    Date d1(26,12,2022);
    d1.DisplayDate();

    return 0;

}