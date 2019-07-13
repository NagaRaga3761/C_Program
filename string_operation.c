#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30],b[30];
int l=0,l1=0,count=0,i,j;
clrscr();
gets(a);
gets(b);
l=strlen(a);
l1=strlen(b);
if(l!=l1)
{
printf("strings are not equal");
}
for(i=0;i<l;i++)
{
if(a[i]==b[i])
{
count++;
}
}
getch();
}