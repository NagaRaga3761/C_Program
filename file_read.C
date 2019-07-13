#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char ch;
 clrscr();
 fp=fopen("62.c","r");
 while(1)
 {
  ch=fgetc(fp);
  if(ch==EOF)
   break;
  printf("%c",ch);
 }
 fclose(fp);
 getch();
}