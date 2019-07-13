#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int calpha,cdigit,cspecial,cspace;
int i;
cdigit=calpha=cspecial=cspace=0;
printf("enter a string");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]>='0' && str[i]<='9')
cdigit++;
else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
calpha++;
else if(str[i]==' ')
cspace++;
else
cspecial++;
}
printf("%d",cspecial);
getch();
}