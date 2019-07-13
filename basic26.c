#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
s=(a*b)%c;
printf("%d",s);
getch();
}