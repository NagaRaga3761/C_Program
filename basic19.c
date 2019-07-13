#include<stdio.h>
#include<conio.h>
void main()
{
int n,cou=0,rem=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
cou++;
n=n/10;
}
printf("%d",cou);
getch();
}