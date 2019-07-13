#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,des=0;
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
printf("yes");
}
else
{
printf("no");
}
getch();
}