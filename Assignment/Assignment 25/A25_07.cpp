/*7. Define a class Greatest and define instance member function to find Largest among 
3 numbers using classes.*/

#include <iostream>
using namespace std;

class Greatest
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
            cout<<"Largest is "<<x;
        }
        else if(y>=x && y>=z)
        {
            cout<<"Largest is "<<y;
        }
        else /*if(c>=a && c>=b)*/
        {
            cout<<"Largest is "<<z;
        }
    }

};

int main()
{
    Greatest a1;
    a1.set();

    a1.calc();

    return 0;
}