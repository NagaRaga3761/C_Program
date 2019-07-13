#include<stdio.h>
#include<conio.h>
void main()
{
 char s[100];
 int i;
 clrscr();
 printf("Enter string");
 scanf("%s",&s);
 for(i=0;s[i]!='\0';i++);
 printf("The length is:%d",i);
 getch();
}
