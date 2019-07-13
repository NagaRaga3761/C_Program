#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a==0)
{
printf("zero");
}
else if(a>0)
{
printf("positive number");
}
else
{
printf("negative number");
}
getch();
}