/*5. Consider following class Numbers 
class Numbers
{ 
    int x,y,z; 
    public:
    // methods };

Overload the operator unary minus (-) to negate the numbers.*/

#include<iostream>
using namespace std;

class Numbers
{
    int x,y,z;
    public:
    void setData(int i, int j, int k)
    {
        x=i;
        y=j;
        z=k;
    }
    void showData()
    {
        cout<<x<<endl<<y<<endl<<z<<endl;
    } 
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
};

int main()
{
    Numbers n1,n2;
    n1.setData(2,3,4);
    n2=-n1;

    n1.showData();
    n2.showData();

    return 0;
}