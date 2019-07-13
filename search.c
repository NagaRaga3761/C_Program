#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],k,n,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i==k-1)
{
printf("%d",a[i]);
}
}
getch();
}