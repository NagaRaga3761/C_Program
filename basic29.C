#include<stdio.h>
#include<conio.h>
void main()
{
 int dive,divi,quo,rem;
 clrscr();
 printf("Enter dividend and divisor values");
 scanf("%d%d",&dive,&divi);
 quo=dive/divi;
 rem=dive%divi;
 printf("\nThe Quotient value is:%d",quo);
 printf("\nThe Reminder value is:%d",rem);
 getch();
}