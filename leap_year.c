#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
scanf("%d",&year);
if((year%4==0)&&(year%100!=0)||(year%400==0))
{
printf("leap year");
}
else
{
printf("not leap year");
}
getch();
}