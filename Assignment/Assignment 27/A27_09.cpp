/*Consider the following class mystring 
Class mystring 
{ 
    char str [100]; 
  Public: 
    // methods 
    }; 
    
Overload operator “!” to reverse the case of each alphabet in the string 
(Uppercase to Lowercase and vice versa).*/

#include<iostream>
using namespace std;
#include<string.h>

class mystring
{
  char str[200];

  public:
  void setString()
  {
    cout<<"Enter a string : ";
    char s[20];
    cin>>s;
    strcpy(str,s);
  }
  void operator!()
  {
    int i;
    for(int i =0; str[i]!='\0';i++)
    {
      if((str[i] >= 97) && (str[i]<=122))
        {
           str[i]=str[i]-32;
        }
      else if((str[i] >= 65) && (str[i]<=96))
      {
           str[i]=str[i]+32;
      }
    }
    cout<<str;
  }

};

int main()
{
  mystring str1,str2;
  str1.setString();
  !(str1);


}