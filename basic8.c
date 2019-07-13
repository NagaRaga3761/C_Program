#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int n;
clrscr();
scanf("%d",&n);
gets(a);
while(n)
{
printf("%s",a);
n--;
}
getch();
}