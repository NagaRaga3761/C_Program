#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int l1,l2;
clrscr();
gets(a);
gets(b);
l1=strlen(a);
l2=strlen(b);
if(l1>l2)
{
printf("%s",a);
}
else if(l1<l2)
{
printf("%s",b);
}
else
{
printf("%s %s",a,b);
}
getch();
}