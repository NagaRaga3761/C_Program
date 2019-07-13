#include<stdio.h>
#include<conio.h>
void main()
{
 int n,flag;
 clrscr();
 printf("Enter integer ");
 scanf("%d",&n);
 flag=primeNumber(n);
 if(flag==1)
  printf("Its a prime number");
 else
  printf("Its not a prime number");
 flag=armstrongNumber(n);
 if(flag==1)
  printf("\nIts a armstrong number");
 else
  printf("\nIts not a armstrong number");
 getch();
}
int primeNumber(int n)
{
 int i,flag=1;
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
   flag=0;
   break;
  }
 }
 return flag;
}
int armstrongNumber(int n)
{
 int temp,rem,res=0,flag;
 temp=n;
 while(n!=0)
 {
  rem=n%10;
  res=res+(rem*rem*rem);
  n=n/10;
 }
 if(res==temp)
  flag=1;
 else
  flag=0;
 return flag;
}