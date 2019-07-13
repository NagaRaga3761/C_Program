#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int k,i;
clrscr();
gets(s);
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
getch();
}