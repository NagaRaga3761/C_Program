#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],min,max=0,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
max=0;
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d %d",min,max);
getch();
}
