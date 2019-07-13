#include<stdio.h>
#include<conio.h>
void main()
{
char str;
clrscr();
scanf("%c",&str);
if(str=='a'||str=='e'||str=='o'||str=='i'||str=='u')
{
printf("vowel");
}
else if(str=='A'||str=='E'||str=='O'||str=='I'||str=='U')
{
printf("vowel");
}
else
{
printf("consonant");
}
getch();
}
