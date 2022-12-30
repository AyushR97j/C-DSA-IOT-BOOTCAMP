/*6. Define a class student and write a program to enter student details using constructor 
and define member function to display all the details.*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    char name[20];
    int id;
    char FatherName[20];
    char MotherName[20];
    float cgpa;

    public:
    Student(const char *i,const char *j, const char *k, int l, float m)
    {
        strcpy(name,i);
        strcpy(FatherName,j);
        strcpy(MotherName,k);
        id = l;
        cgpa = m;
    }

    void displayDetail()
    {
        cout<<"Name        : "<<name<<endl<<"Father Name : "<<FatherName<<endl<<"Mother Name : "<<MotherName<<endl<<"Id          : "<<id<<endl<<"CGPA        : "<<cgpa<<endl;
    }

};

int main()
{
    Student s1("Biyush","Ramesh","Geetanjali", 2184 , 2.3);
    s1.displayDetail(); 
    
    return 0;

}    