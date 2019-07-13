#include<math.h>
#include <stdio.h>
#include <conio.h>
void main()
{
 long long n;
 clrscr();
 printf("Enter binary number");
 scanf("%lld",&n);
 printf("The binary to decimal is:%d",binaryToDecimal(n));
 getch();
}
int binaryToDecimal(long long n)
{
 int decimalNumber=0,i=0,rem;
 while(n!=0)
 {
  rem=n%10;
  n=n/10;
  decimalNumber+=rem*pow(2,i);
  ++i;
 }
 return decimalNumber;
}