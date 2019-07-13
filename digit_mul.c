#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,mul=1;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
mul=mul*rem;
n=n/10;
}
printf("%d",mul);
getch();
}