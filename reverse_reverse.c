#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,rem=0,rem2=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
while(sum)
{
rem2=sum%10;
printf("%d ",rem2);
sum=sum/10;
}
getch();
}