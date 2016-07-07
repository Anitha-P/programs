#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact;
clrscr();
printf("\n enter the number  :  ");
scanf("%d",&n);
for(int i=1;i<n;i++)
fact=n*i;
printf("%d * %d =%d",i,n,fact);
getch();
}
