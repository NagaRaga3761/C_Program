#include<stdio.h>
#include<conio.h>
void main()
{
 int number;
 clrscr();
 printf("Enter number to find");
 scanf("%d",&number);
 printf("The factorial of %d is %d",number,findFactorial(number));
 getch();
}
findFactorial(int n)
{
 if(n!=0)
 {
  return n*findFactorial(n-1);
 }
 else
  return 1;
}