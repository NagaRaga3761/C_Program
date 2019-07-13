#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
void main()
{
    struct employee *ptr;
    ptr=(struct employee*)malloc(sizeof(struct employee));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
       scanf("%d%s%f",&ptr->id,ptr->name,&ptr->salary);
       printf("%d\t%s\t%f\The",ptr->id,ptr->name,ptr->salary);
    }
   // printf("The sum is %d",sum);
}
