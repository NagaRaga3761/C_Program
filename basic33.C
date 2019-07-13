#include <stdio.h>
#include <conio.h>
void reverseSentence();
void main()
{
 clrscr();
 printf("Enter a sentence");
 reverseSentence();
 getch();
}
void reverseSentence()
{
 char c;
 scanf("%c",&c);
 if(c!='\n')
 {
  reverseSentence();
  printf("%c",c);
 }
}