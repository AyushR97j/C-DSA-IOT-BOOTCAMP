/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate 
number of instance member variables and also define instance member functions to 
set values for time and display values of time.*/

#include<iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;
public:
    void setTime(int x, int y, int z)
    {
        hr =x;
        min =y;
        sec =z;
    }

    void displayTime()
    {
        cout<<hr<<" hr "<<min<<" min "<< sec<<" sec";
        cout<<endl;
    }

};

int main()
{
    Time t1,t2,t3;
    t1.setTime(3,23,9);
    t2.setTime(11,5,23);
    t3.setTime(8,45,55);
    t1.displayTime();
    t2.displayTime();
    t3.displayTime();

    return 0;
}