#include<stdio.h>
#include<conio.h>
void main()
{
 int i,s;
 clrscr();
 printf("Enter integer value to produce multliplication table");
 scanf("%d",&s);
 for(i=1;i<=10;i++)
 {
  printf("%d*%d=%d",s,i,s*i);
  printf("\n");
 }
 getch();
}