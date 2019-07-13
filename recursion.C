#include<stdio.h>
#include"conio.h"
void main()
{
 int number;
 clrscr();
 printf("Enter number to find sum");
 scanf("%d",&number);
 printf("The sum is:%d",addNumber(number));
 getch();
}
int addNumber(int n)
{
 if(n!=0)
  return n+addNumber(n-1);
 else
  return n;
}