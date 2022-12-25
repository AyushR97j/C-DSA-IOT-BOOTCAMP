/*3. Define a class Factorial and define an instance member function to find the Factorial 
of a number using class.*/

#include<iostream>
using namespace std;

class Factorial
{
    private:
        int n;
    public:

        void Input()
        {
            int i;
            cout<<"Enter a number ";
            cin>>i;
            n=i;

        }
        void fact()
        {
            int fact =1;
            if(n<=1)
            {
                cout<<fact;
                cout<<endl;
                
            }
            else
            {
                //int fact = 1;
            for(int i =1; i <=n;i++)
            {
                fact = fact*i;
            }
            cout<< fact;
            }
        }

};

int main()
{
    Factorial f1;
    f1.Input();
    f1.fact();

    return 0;
}