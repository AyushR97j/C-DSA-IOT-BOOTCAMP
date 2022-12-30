/*8. Consider a class Matrix 

Class Matrix 
{ 
    int a[3][3];
  Public: 
    //methods; 
}; 
    Overload the - (Unary) should negate the numbers stored in the object.*/

#include<iostream>
using namespace std;
 class Matrix
 {
    int a[3][3];

    public:
        void InputMatrix()
        {
        cout<<"Enter Matrix elements (3 x 3):";
        for(int i = 0;i<3;i++)
            {
                for (int j =0;j<3;j++)
                {
                    cin>>a[i][j];
                }
        }
        cout<<endl;
        }

        void showMatrix()
        {
            cout<<"Matrix is : "<<endl;
            for(int i = 0;i<3;i++)
            {
                for (int j =0;j<3;j++)
                {
                    cout<<a[i][j]<<"  ";
                    if(j==2)
                    {
                        cout<<endl;
                    }
                }
            }
        }

        Matrix operator-()
        {
            Matrix m;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                m.a[i][j] = -a[i][j];
                }
            } 
            return m;  
        }

 };

 int main()
 {
    Matrix m1,m2;
    m1.InputMatrix();

    m1.showMatrix();

    m2=-m1;
    m2.showMatrix();


 }