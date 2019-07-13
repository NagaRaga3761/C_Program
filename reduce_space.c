#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[40];
int i,l,j;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==' ' && s[i+1]==' ')
{
for(j=i+1;j<l;j++)
{
s[j]=s[j+1];
}
}
}
printf("%s",s);
getch();
}