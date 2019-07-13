#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],k,n,sum=0,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<k)
{
sum=sum+a[i];
}
}
printf("%d",sum);
getch();
}