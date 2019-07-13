#include <stdio.h>

int main()
{
    char str[20];
    int i=0,count=0;
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    str[count]='.';
    str[count+1]='\0';
    printf("%s",str);
    getch();
}