#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter the character  :  ");
scanf("%d",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf("given character is vowel");
else 
printf("given character is consonant");
getch();
}
