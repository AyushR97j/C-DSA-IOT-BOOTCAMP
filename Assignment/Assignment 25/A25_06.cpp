/*6. Define a class Square to find the square of a number and write a C++ program to 
Count number of times a function is called.*/

#include<iostream>
using namespace std;

class Square
{
    private:
        int x;

    public:
        
        static int count ;

        void input()
        {
            int a;
            cout<<"Enter a number";
            cin>>a;
            x=a;
        }
        void sq()
        {
            cout<<x*x;
            cout<<endl;
            count++;
            
        }

};
int Square::count=0;

int main()
{
    Square s1,s2,s3;
    s1.input();
    s2.input();
    s3.input();

    s1.sq();
    s2.sq();
    s3.sq();
    cout<<"The function sq is called "<<Square::count<<" times";

    return 0;

}