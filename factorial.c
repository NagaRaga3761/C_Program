#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
printf("enter a integer");
scanf("%d",&n);
if(n<0)
{
printf("error,factorial of negative value doesn't exist");
}
else
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of%d",fact);
}
getch();
}