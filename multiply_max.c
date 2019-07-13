#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,max;
clrscr();
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
max=n1;
}
else
{
max=n2;
}
while(1)
{
if(max%n1==0 && max%n2==0)
{
printf("%d",max);
break;
}
++max;
}
getch();
}