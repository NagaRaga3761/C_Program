#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char ch;
 clrscr();
 fp=fopen("file.txt","w");
 fprintf(fp,"hello guys");
 fclose(fp);
 getch();
}