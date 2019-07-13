#include<stdio.h>
#include<conio.h>
void main()
{
 char str[100],c='a';
 int freq=0,i;
 clrscr();
 printf("enter the string");
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
 {
  if(c==str[i])
   freq++;
 }
 printf("Frequency of character is:%d",freq);
 getch();
}