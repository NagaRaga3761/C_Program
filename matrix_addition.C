#include <stdio.h>
#include <conio.h>
void main()
{
 int a[100][100],b[100][100],sum[100][100],i,j,r,c;
 clrscr();
 printf("Enter number of rows");
 scanf("%d",&r);
 printf("Enter number of columns");
 scanf("%d",&c);
 printf("Enter first matrix");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("Enter element a%d%d:",i+1,j+1);
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter second matrix");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("Enter element b%d%d:",i+1,j+1);
   scanf("%d",&b[i][j]);
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    sum[i][j]=a[i][j]+b[i][j];
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",sum[i][j]);
  }
  printf("\n");
 }
 getch();
}