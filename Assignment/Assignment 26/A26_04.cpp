/*4. Define a class Counter and Write a program to Show Counter using Constructor.*/

#include<iostream>
using namespace std;

class Counter
{
    int static count;

    public:
        Counter()
        {
            ++count;
        }
        void get_count()
        {
            cout<<count;
        }
};
int Counter:: count;
 int main()
 {
    Counter c1,c2,c3,c4,c5;
    c1.get_count();
    return 0;
 }