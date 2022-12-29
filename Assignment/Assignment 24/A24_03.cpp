/*3. Define a function to calculate x raised to the power y*/
#include<iostream>
using namespace std;

int PowerFunction(int x, int y)
{
    int result=1;
    if(y==0)
    {
        return 1;
    }
    else
    {
        for(int p =y;p>=1;p--)
        {
            result = x*result;
        }
    }
    return result;
}
int main()
{
    int a,b;
    cout<<"Enter the number and its power";
    cin>>a>>b;
    cout<<PowerFunction(a,b);
    return 0;

}