#include <stdio.h>

int main()
{
    int n,res,rem,i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }
    printf("%d",res);
    getch();
}