#include<stdio.h>
main()
{
int i,j;
for(i=1;i<7;i++)
   {
   for(j=1;j<=i;j++)
       printf("%d ",f(j));
   printf("\n");
   }
}
int f(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	    s=s+i;
	return s;
}
