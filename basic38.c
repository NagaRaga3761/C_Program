#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,rem=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
sum=sum+(rem*rem);
n=n/10;
}
printf("%d",sum);
getch();
}