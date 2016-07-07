#include<sdio.h>
#include<conio.h>
void main()
{
int year;
printf("\n enter the year  ");
scanf("%d",&year");
if(year%4==0)
printf("leap year");
else
printf("nonleap year");
getch();
}
