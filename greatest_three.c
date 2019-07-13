#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();
scanf("%d%d%d",&x,&y,&z);
if(x>y && x>z)
{
printf("x is greatest");
}
else if(y>x && y>z)
{
printf("y is greatest");
}
else
{
printf("z is greatest");
}
getch();
}