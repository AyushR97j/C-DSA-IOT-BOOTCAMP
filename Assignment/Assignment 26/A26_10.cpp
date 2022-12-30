/*10. Define a class StaticCount and create a static variable. Increment this variable in a 
function and call this 3 times and display the result*/

#include<iostream>
using namespace std;

class StaticCount
{
    static int x;

    public:
    void Increment()
    {
        x++;   
    }
    void display()
    {
        cout<<x;
    }
};
int StaticCount:: x;
int main()
{
    StaticCount s1;
    s1.Increment();
    s1.Increment();
    s1.Increment();

    s1.display();

    return 0;
}