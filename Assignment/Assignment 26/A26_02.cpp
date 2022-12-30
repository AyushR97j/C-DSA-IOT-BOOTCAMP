/*2. Define a class Time to represent a time with instance variables h,m and s to store 
hour, minute and second. Also define following member functions 
a. void setTime(int,int,int) 
b. void showTime() 
c. void normalize() 
d. Time add(Time)*/

#include<iostream>
using namespace std;

class Time
{
    int h,m,s;

    public:
    void setTime(int x, int y, int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showTime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void normalize()
    {
        while(s>=60)
        {
            m++;
            s=s-60;
        }
        while(m>=60)
        {
            h++;
            m=m-60;
        }
        cout<<"Time after normalization is :"<<h<<":"<<m<<":"<<s<<endl;
    }
    Time add(Time x)
        {
            Time temp;
            temp.h=h+x.h;
            temp.m=m+x.m;
            temp.s=s+x.s;
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(2,89,67);
    t2.setTime(5,45,34);

    t3=t1.add(t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();

    t1.normalize();
    t2.normalize();
    t3.normalize();


    return 0;
}