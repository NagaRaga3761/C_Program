#include<stdio.h>
#include<conio.h>
int main()
{
  int array[100],k,i,j,temp,n;
  printf("Enter The length Of The Array ");
  scanf("%d%d",&n,&k);
  printf("\nEnter The Numbers:");
 for(i=0;i<n;i++)
   {
    scanf("%d",&array[i]);
    }
 for(i=0;i<n;i++)
   {
     for(j=0;j<n-1;j++)
     {
      if(array[j]>array[j+1])
        {
         temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
         }
      }
     }
  for(i=0;i<n;i++)
  {
    printf(" %d ",array[i]);
   }
   printf("\nThe %d th smallest number is: %d",k,array[k-1]);
   return 0;
  }