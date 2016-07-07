#include<stdio.h> #include<conio,h> void main() { int n,copy,sum; printf("\n enter the number  :  "); scanf("%d",&n);
for(copy=2;copy<n;copy++)
{
if(n%copy==0)
sum=0;
else{
sum=1;
break;}
}
if(sum==0)
printf("prime number")}
else
printf(" not prime number");
getch();
}
