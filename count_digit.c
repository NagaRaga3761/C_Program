#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30];
int i,count=0,n;
clrscr();
scanf("%[^\t\n]s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>='0' && a[i]<='9')
{
count++;
}
}
printf("%d",count);
getch();
}