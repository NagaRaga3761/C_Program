#include <stdio.h>
#include<math.h>
int main(void) 
{
	int a,d,s,m;
	int t1,t2;
	printf("\n enter the number of terms:");
	scanf("%d%d",&t1,&t2);
	a=t1+t2;
	s=t1-t2;
	m=t1*t2;
	d=t1/t2;
	printf("\n%d",a);
	printf("\n%d",s);
	printf("\n%d",m);
	printf("\n%d",d);
	return 0;
}