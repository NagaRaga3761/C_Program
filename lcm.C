#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,i,gcd,lcm;
 clrscr();
 printf("Enter numbers to find gcd");
 scanf("%d%d",&n1,&n2);
 for(i=1;i<=n1&&i<=n2;i++)
 {
  if((n1%i==0)&&(n2%i==0))
  {
    gcd=i;
  }
 }
 lcm=(n1*n2)/gcd;
 printf("The lcm is:%d",lcm);
 getch();
}