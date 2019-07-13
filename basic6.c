#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,count=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
{
count++;
}
}
printf("%d",count);
getch();
}
