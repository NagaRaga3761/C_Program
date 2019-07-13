#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,j,temp;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n%s",a);
getch();
}