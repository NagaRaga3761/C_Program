#include<stdio.h>
#include<stdlib.h>
#define size 5
int items[size],front=-1,rear=-1;
int isFull()
{
  if((front==rear+1)||(front==0&&rear==size-1))
   return 1;
  else
   return 0;
}
int isEmpty()
{
 if(front==-1)
  return 1;
 return 0;
}
void enqueue(int e)
{
 if(isFull())
 {
  printf("WUEUE FULL");
 }
 else
 {
  if(front==-1)
   front=0;
  rear=(rear+1)%size;
  items[rear]=e;
  printf("Inserted %d",e);
 }
}
void dequeue()
{
 int e;
 if(isEmpty())
 {
  printf("QUEUE EMPTY");
 }
 else
 {
  e=items[front];
  if(front==rear)
   front=rear=-1;
  else
  // e=items[front];
   front=(front+1)%size;
 }
 printf("Deleted Element is %d",e);
}
void display()
{
 int i;
 printf("Front %d\n",front);
 for(i=front;i!=rear;i=(i+1)%size)
 {
  printf("%d ",items[i]);
 }
 printf("%d ",items[i]);
}
void main()
{
 int loop=1,choice,n;
 while(loop)
 {
  printf("Choose operation");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	  printf("Enter element to enqueue");
	  scanf("%d",&n);
	  enqueue(n);
	  break;
   case 2:
	  printf("Dequeue operation");
	  dequeue();
	  break;
   case 3:
	  printf("Display elements");
	  display();
	  break;
   case 4:
	  loop=0;
	  exit(0);
	  break;
  }
 }
}