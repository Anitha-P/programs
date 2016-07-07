#include<stdio.h> #include<conio.h> void main() { int n,n1,i; 
printf("\n enter thefirst number  :  "); 
scanf("%d",&n);
printf("\n enter the seond number  :  "); 
scanf("%d",&n1);
int a=n;
int b=n1,sum=0;
for(n;n<=n1;n++)
{
a=n;
while(n>0)
{
int r=n/10;
sum=sum+r*r*r;
n=n%10;
}
if(sum==a)
printf("%d",sum);
}
getch();
}
