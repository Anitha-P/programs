#include<stdio.h>
#inlcude<conio.h>
#inlcude<string.h>
void main()
{
string s1;
clrscr();
printf("\n enter the day");
gets(s1);
if(strcmp(s1,"sunday")==0)
printf(" holiday");
else
printf(" working day");
getch();
}
