#include<stdio.h>
#include<conio,h>
void main()
{
int n,sum=0;
printf("\n enter the number  :  ");
scanf("%d",&n);
for(int i=0;i<n;i++)
sum=sum+i;
printf("the sum is  :  %d",sum);
getch();
}
