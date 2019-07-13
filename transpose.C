#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a[10][10],transpose[10][10],r,c,i,j;
 clrscr();
 printf("enter the number of row=");
 scanf("%d",&r);
 printf("enter the number of column=");
 scanf("%d",&c);
 printf("enter the matrix element=\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
  scanf("%d",&a[i][j]);
  }
 }
 printf("The Entered matrix is");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    transpose[j][i]=a[i][j];
  }
 }
 printf("The transpose matrix is\n");
 for(i=0;i<c;i++)
 {
  for(j=0;j<r;j++)
  {
   printf("%d\t",transpose[i][j]);
  }
  printf("\n");
 }
 getch();
}