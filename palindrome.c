#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,rem=0,sum=0;
clrscr();
scanf("%d",&n);
a=n;
while(a)
{
rem=a%10;
sum=sum*10+rem;
a=a/10;
}
printf("%d\n",sum);
if(n==sum)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
getch();
}