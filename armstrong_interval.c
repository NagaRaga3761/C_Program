#include <stdio.h>
#include <math.h>
void main()
{
 int low,high,i,temp1,temp2,rem,n=0,res=0;
//clrscr();
 printf("enter two numbers:");
 scanf("%d%d",&low,&high);
 for(i=low+1;i<high;i++)
 {
  temp1=i;
  temp2=i;
  while(temp1)
  {
   temp1=temp1/10;
   n++;
  }
  while(temp2)
  {
     rem=temp2%10;
     res=res+pow(rem,n);
     temp2=temp2/10;
  }
  if(res==i)
  {
     printf("%d ",res);
  }
  n=0;
  res=0;
 }
//getch();
} 