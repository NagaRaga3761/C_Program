#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,des=0;
clrscr();
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
des=1;
break;
}
}
if(des==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}