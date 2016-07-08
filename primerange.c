#include<stdio.h> 
#include<conio.h> 
void main() { 
int n,n1; 
int i;
printf("\n enter thefirst number  :  "); 
scanf("%d",&n);
printf("\n enter the seond number  :  "); 
scanf("%d",&n1);
while(n<n1)
{
for(i=2;i<n;i++)
{
if(n%i==0)
sum=0;
else{
sum=1;
break;}

if(sum==0)
printf("%d",copy);
}
getch();
}
