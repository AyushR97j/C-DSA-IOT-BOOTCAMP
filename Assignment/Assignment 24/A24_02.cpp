//2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

void HighestDigit(int x)
{
    int max =0;
    for (int i=10; i<=10*x ;1)
    {
        int r = x%i;
        x= x/10;
        if(r>max)
        {
            max = r;
        }
    }
    cout<<"Highest value digit of the given number is "<<max;
}

int main()
{
    int m;
    cout<<"Enter any number";
    cin>>m;
    HighestDigit(m);
    return 0;

}