#include<stdio.h>
#include<conio.h>
void main()
{
 int fir,sec,opr;
 clrscr();
 printf("Enter two numbers to perform calculations");
 scanf("%d%d",&fir,&sec);
 printf("Enter operators to perform 1.Add 2.Subtraction 3.Multiply 4.Division");
 scanf("%d",&opr);
 switch(opr)
 {
  case 1:
       printf("%d+%d=%d",fir,sec,fir+sec);
       break;
  case 2:
       printf("%d-%d=%d",fir,sec,fir-sec);
       break;
  case 3:
       printf("%d*%d=%d",fir,sec,fir*sec);
       break;
  case 4:
       printf("%d/%d=%d",fir,sec,fir/sec);
       break;
  case 5:
       exit(0);
       break;
 }
 getch();
}