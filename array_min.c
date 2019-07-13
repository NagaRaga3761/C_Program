#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],min,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d",min);
getch();
}