#include<stdio.h>
int main()
{
int com,eng,math,chem,phy,Total,percent;
printf("Enter marks scored in mathematics: ");
scanf("%d",&math);
printf("Enter marks scored in physics: ");
scanf("%d",&phy);
printf("Enter marks scored in chemistry: ");
scanf("%d",&chem);
printf("Enter marks scored in computer: ");
scanf("%d",&com);
printf("Enter marks scored in English: ");
scanf("%d",&eng);
Total= math+phy+chem+com+eng;
percent=(Total*100)/500;
printf("Your percentage is %d\n",percent);
if (percent>=33)
{
printf("Congratulations, You have passed the examinations");
}
else
{
printf(" Failed in examinations");
}
return 0;
}
