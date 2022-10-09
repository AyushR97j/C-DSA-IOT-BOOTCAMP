#include<stdio.h>
int main()
{
char x;
printf("Enter any character:");
scanf("%c",&x);
if (x>=65 && x<=90)
printf("UPPERCASE");
else if (x>=97 && x<=122)
printf("LOWERCASE");
else
printf("UNKNOWN LETTER");
}