#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[10][20],temp[50];
 int i,j;
 clrscr();
 printf("Enter string");
 for(i=0;i<5;i++)
 {
  scanf("%s",&s[i]);
 }
 for(i=0;i<5;i++)
 {
  for(j=i+1;j<5;j++)
  {
   if(strcmp(s[i],s[j])>0)
   {
    strcpy(temp,s[i]);
    strcpy(s[i],s[j]);
    strcpy(s[j],temp);
   }
  }
 }
 printf("Orders");
 for(i=0;i<5;i++)
 {
  printf("%s\n",s[i]);
 }
 getch();
}