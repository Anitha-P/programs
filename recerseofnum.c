#include<stdio.h>
#include<conio,h>
void main()
{
int n,copy,sum;
printf("\n enter the number  :  ");
scanf("%d",&n);
copy=n;
while(n>0)
{
int r=n/10;
sum=sum*10+r;
n=n%10;
}
printf("the reverse is : %d",sum);
getch();
}
