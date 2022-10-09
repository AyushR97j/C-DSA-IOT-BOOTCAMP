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
else if(x>=48 && x<=57)
printf("A DIGIT");
else
printf ("Special character");
return 0;
}