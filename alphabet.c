#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
scanf("%c",&a);
if(a>='a' && a<='z' || a>='A' && a<='Z')
{
printf("Alpabet");
}
else
{
printf("not alpabet");
}
getch();
}