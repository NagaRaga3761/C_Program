#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,sum=1,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
{
sum=sum*n;
}
printf("%d",sum);
getch();
}