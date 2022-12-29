//4. Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;

int Factorial(int x)
{
    if (x<=0)
        return 1;
    int factorial = 1;
    for (int i = 1; i<=x; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int Combination(int n , int r)
{
    return Factorial(n)/((Factorial(r)*Factorial(n-r)));
}


int main()
{
    int n;
    cout<< "Enter n";
    cin>>n;
    for(int i = 0; i<n; i++ )
    {
        for(int k =0;k<(n-i);k++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<Combination(i,j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}