#include<stdio.h>
#include<conio.h>
void main()
{
int n,s,sum=1;
clrscr();
scanf("%d%d",&n,&s);
while(s)
{
sum*=n;
s--;
}
printf("%d",sum);
getch();
}