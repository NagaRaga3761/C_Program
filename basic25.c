#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s=0;    
clrscr();
scanf("%d%d%d",&a,&b,&c);
s=(c/2)*((2*a)+(c-1)*b);
printf("%d",s);
getch();
}