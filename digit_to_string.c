#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0,sum=0;
//clrscr();
scanf("%d",&n);
while(n>0)
{
   rem=n%10;
   sum=sum*10+rem;
   n=n/10;
}
while(sum>0)
{
   rem=sum%10;  
   sum=sum/10;
   
switch(rem)
{
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
case 6:
printf("six");
break;
case 7:
printf("seven");
break;
case 8:
printf("eight");
break;
case 9:
printf("nine");
break;
case 10:
printf("ten");
break;
default:
printf("enter the number between 1 to 10");
break;
}
printf("\t");
}
getch();
}