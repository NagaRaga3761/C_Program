#include<stdio.h>
#include<conio.h>
void main()
{
int k,i=0,sum=0;
clrscr();
scanf("%d",&k);
for(i=0;i<=k;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}