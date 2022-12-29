/*7. Write a function using the default argument that is able to add 2 or 3 numbers.*/

#include<iostream>
using namespace std;
int add(int x, int y,int z=0)
{
    return x+y+z;
}
int main()
{
    cout<<"int sum1 = " << add(2,4);
    cout<<endl;
    cout<<"int sum2 = "<<add(3,8,6);
    cout<<endl;
    return 0;
}