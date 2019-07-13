#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 float f;
 char c;
 double d;
 long l;
 clrscr();
 printf("Size of Int:%ld bytes\n",sizeof(i));
 printf("Size of Float:%ld bytes\n",sizeof(f));
 printf("Size of Char:%ld bytes\n",sizeof(c));
 printf("Size of Double:%ld bytes\n",sizeof(d));
 printf("Size of Long:%ld bytes\n",sizeof(l));
 getch();
}
