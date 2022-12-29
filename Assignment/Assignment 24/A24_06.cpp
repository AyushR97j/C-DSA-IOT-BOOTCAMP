/*6. Define a function to swap data of two int variables using call by reference*/
#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y=temp;
}

int main()
{
    int m,n,*i,*j;
    i=&m;
    j=&n;

    cout<<"Enter two  numbers";
    cin>>m>>n;
    cout<<"Before swapping : m = "<< m<< " n = "<<n;

    swap(m,n);

    cout<<endl;
    cout<<"After swapping : m = "<< m<< " n = "<<n;
    cout<<endl;

    return 0;

}