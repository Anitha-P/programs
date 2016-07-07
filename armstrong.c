#include<stdio.h> #include<conio.h> void main() { int n,n1,i; 
printf("\n enter the number  :  "); 
scanf("%d",&n);

int a=n;


while(n>0)
{
int r=n/10;
sum=sum+r*r*r;
n=n%10;
}
if(sum==a)
printf("%d is armstrong",sum);
}
getch();
}
