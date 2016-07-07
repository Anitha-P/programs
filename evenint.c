#include<stdio.h> 
#include<conio.h> 
void main() 
{
int n,n1,count=0;
printf("\n enter the first number  :  "); 
scanf("%d",&n);
printf("\n enter the second number  :  "); 
scanf("%d",&n1);
for(n;n<=n1;n++)
{
if(n%2==0)
count++;
}
printf("no of even terms are :%d",count);
getch();
}
