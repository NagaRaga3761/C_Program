#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,*data;
 clrscr();
 printf("Enter number of elements\n");
 scanf("%d",&n);
 data=(int*)calloc(n,sizeof(int));
 if(data==NULL)
  printf("Memory not allocated");
 else
 {
  for(i=0;i<n;i++)
  {
   printf("Enter element:%d",i+1);
   scanf("%d",data+i);
  }
  for(i=0;i<n;i++)
  {
   if(*data<*(data+i))
    *data=*(data+i);
  }
 }
 printf("Largest Element:%d",*data);
 getch();
}