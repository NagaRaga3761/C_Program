#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],maximum,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
maximum=0;
for(i=0;i<n;i++)
{
if(a[i]>maximum)
{
maximum=a[i];
}
}
printf("%d",maximum);
getch();
}