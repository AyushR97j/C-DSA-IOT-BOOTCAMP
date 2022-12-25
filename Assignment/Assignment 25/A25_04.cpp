/*4. Define a class LargestNumber and define an instance member function to find the 
Largest of three Numbers using the class.*/

#include <iostream>
using namespace std;

class LargestNumber
{
    private:
    int x,y,z;

    public:
    void set()
    {
        int a,b,c;
        cout<<"Enter 3 numbers";
        cin>>a>>b>>c;
        x=a;
        y=b;
        z=c;

    }

    void calc( )
    {
        //int r=0;
        if(x>=y && x>=z)
        {
            cout<<"Greatest is "<<x;
        }
        else if(y>=x && y>=z)
        {
            cout<<"Greatest is "<<y;
        }
        else /*if(c>=a && c>=b)*/
        {
            cout<<z;
        }
    }

};

int main()
{
    LargestNumber a1;
    a1.set();

    a1.calc();

    return 0;
}