#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[300];
int i,l;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>=97 && s[i]<=122)
{
s[i]=s[i]-32;
}
else if(s[i]>=65 && s[i]<=90)
{
s[i]=s[i]+32;
}
}
printf("%s",s);
getch();
}