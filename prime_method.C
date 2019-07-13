#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,flag,i;
 clrscr();
 printf("Enter two positive integers");
 scanf("%d%d",&n1,&n2);
 for(i=n1+1;i<=n2;i++)
 {
   flag=primeNumber(i);
   if(flag==1)
    printf("%d\n",i);
 }
 getch();
}
int primeNumber(int n)
{
 int j,flag=1;
 for(j=2;j<=n/2;j++)
 {
  if(n%j==0)
  {
   flag=0;
   break;
  }
 }
 return flag;
}