/*
6. Create a class CString to represent a string. 
a) Overload the + operator to concatenate two strings. 
b) == to compare 2 strings.
*/

#include<iostream>
using namespace std;
#include<string.h>

class CString
{
    int size;
    char a[20];

    public:
    CString (const char *i,int j)
    {
        strcpy(a,i);
        size =j;
    }
    void operator==(CString x)
    {
        int BiggerSize;
        if(size>x.size)
        {
            BiggerSize = size;
        }
        else
        {
            BiggerSize = x.size;
        }
        int count =0;
        for(int i=0;i<(BiggerSize+1);i++)

        if(a[i]==x.a[i])
        {}
        else
        {
            count++;
        }
        if(count == 0)
        {
            cout<<"Same"<<endl;
        }
        else
        {
            cout<<"Not same"<<endl;
        }
    }
    void operator+(CString x)
    {
        cout<<a<<x.a<<endl;
    }
};

int main()
{
    CString c1("Ayush",5),c2("Shubham",7),c3("Shubham",7);
    c1==c2;
    c1==c3;
    c2==c3;

    c1+c2;
    c1+c3;
    c2+c3;
    return 0;

}