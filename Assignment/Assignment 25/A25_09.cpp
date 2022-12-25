/*9. Define a class Circle and define an instance member function to find the area of the circle.*/

#include<iostream>
using namespace std;

class Circle
{
    float r,a;
     public:
         void Input()
         {
            cout<<"Enter the value of radius";
            cin>>r;
         }

         void AreaCircle()
         {
            cout<<"Area of circle is "<<(3.14*r*r);
            cout<<endl;
         }
};

int  main()
{
    Circle c1, c2;
    c1.Input();
    c2.Input();

    c1.AreaCircle();
    c2.AreaCircle();

    return 0;
}
