#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
scanf("%d",&n);
for(i=n;i<100;i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
getch();
}
.