#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the number  ;");
scanf("%d",&n);
int a=0,b=1;
printf("\n %d \n %d",a,b);
for(int i=1;i<n;i++)
{
int temp=a;
a=b;
b=temp+a;
printf("\n %d",b);
}
getch();
}
