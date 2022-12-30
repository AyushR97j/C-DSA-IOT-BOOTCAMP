/*
Class Matrix 
{ 
    int a[3][3]; 
  Public: 
    //methods; 
}; 
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).*/

#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    public:
    void InputMatrix()
        {
        cout<<"Enter Matrix Elements (3 x 3):";
        for(int i = 0;i<3;i++)
            {
                for (int j =0;j<3;j++)
                {
                    cin>>a[i][j];
                }
        }
        cout<<endl;
        }

        Matrix operator+(Matrix m)
        {
            Matrix temp;
            for(int i=0;i<3;i++)
            {
                for(int j =0;j<3;j++)
                {
                    temp.a[i][j]=a[i][j]+m.a[i][j];
                }
            }
            return temp;
        }

        void displayMatrix()
        {
        for(int i = 0;i<3;i++)
            {
                for (int j =0;j<3;j++)
                {
                    cout<<a[i][j];
                    cout<<" ";
                    if(j==2)
                    {
                        cout<<endl;
                    }
                }
        }
        cout<<endl;
        }
};

int main()
{
    Matrix m1,m2,m3;
    m1.InputMatrix();
    m2.InputMatrix();
    cout<<"First Matrix "<<endl ;
    m1.displayMatrix();
    cout<<"Second Matrix : "<<endl;
    m2.displayMatrix();
    
    m3=m1+m2;

    cout<<"Addition of Matrix : "<<endl;
    m3.displayMatrix();
    return 0;
}