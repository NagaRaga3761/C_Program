#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
void main()
{
 int a,b;
 clrscr();
 printf("Enter values of a and b");
 scanf("%d%d",&a,&b);
 printf("Value before swap a=%d b=%d\n",a,b);
 swap(&a,&b);
 printf("Value after swap a=%d b=%d",a,b);
 getch();
}
void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}