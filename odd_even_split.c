#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,j=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
else
{
b[j]=a[i];
j++;
}
}
b[j]='\0';
for(j=0;b[j]!='\0';j++)
{
printf("%c",b[j]);
}
getch();
}