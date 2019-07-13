#include<math.h>
#include <stdio.h>
#include <conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter octal  number");
 scanf("%d",&n);
 printf("The octal to decimal is:%d",octalToDecimal(n));
 getch();
}
int octalToDecimal(int n)
{
 int decimalNumber=0,i=0,rem;
 while(n!=0)
 {
  rem=n%10;
  n=n/10;
  decimalNumber+=rem*pow(8,i);
  ++i;
 }
 return decimalNumber;
}