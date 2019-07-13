#include<stdio.h>
#include<stdlib.h>
void main()
{
 int data[5],i;
 clrscr();
 printf("Enter the values");
 for(i=0;i<5;i++)
 {
  scanf("%d",data+i);
 }
 printf("you entered");
 for(i=0;i<5;i++)
 {
  printf("%d",*(data+i));
 }
 getch();
}
