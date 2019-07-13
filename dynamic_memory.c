#include<stdio.h>
void main()
{
    int *ptr,n,sum=0;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("Enter elements");
        for(int i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
            sum+=*(ptr+i);
        }
    }
    printf("The sum is %d",sum);
}
