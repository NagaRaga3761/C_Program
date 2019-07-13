#include<stdio.h>
#include<conio.h>
void main()
{
 int fir,sec,tot;
 clrscr();
 printf("Enter two values to add");
 scanf("%d%d",&fir,&sec);
 tot=fir+sec;
 printf("The total of %d and %d is %d",fir,sec,tot);
 getch();
}