#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,p=0;
clrscr();
scanf("%d%d",&n,&m);
p=n*m;
if(p%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}