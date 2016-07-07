#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1;
clrscr();
printf("\n enter the number  :  ");
scanf("%d",&n);
for(int i=1;i<n;i++)
fact=fact*i;
printf("fact : %d",fact);
getch();
}
