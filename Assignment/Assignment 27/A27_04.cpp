/*4. Create a class Time which contains: 
- Hours 
- Minutes 
- Seconds 
Write a C++ program using operator overloading for the following: 
1. = = : To check whether two Times are the same or not. 
2. >> : To accept the time. 
3. << : To display the time*/

#include<iostream>
using namespace std;

class Time
{
    private:
    int Hours,Minutes,Seconds;

    public:
    friend istream& operator>>(istream &in, Time&);
    friend ostream& operator<<(ostream &, Time );
    void operator==(Time t)
    {
        if(Hours==t.Hours && Minutes == t.Minutes && Seconds == t.Seconds)
        {
            cout<<"Times are Same";
        }
        else
        {
            cout<<"Times are NOT Same";
        }
    }

};

istream& operator>>(istream &in, Time &t )
    {
        cout<<"Enter Hours   : ";
        cin>>t.Hours;
        cout<<"Enter Minutes : ";
        cin>>t.Minutes;
        cout<<"Enter Seconds : ";
        cin>>t.Seconds;
        cout<<endl;
        return in;
    }

ostream& operator<<(ostream &o, Time t )
    {
        o<<"Hours    : "; 
        o<<t.Hours<<endl;
        o<<"Minutess : ";
        o<<t.Minutes<<endl;
        o<<"Seconds  : ";
        o<<t.Seconds<<endl;
        return o;
    }

int main()
{
    Time t1,t2;
    cout<<"Enter First Time "<<endl<<"--------"<<endl;
    cin>>t1;
    cout<<"First Time"<<endl<<t1<<endl;
    cout<<"Enter Second Time "<<"--------"<<endl;
    cin>>t2;
    cout<<"Second Time "<<endl<<t2<<endl;

    t1==t2;

    return 0;
}
