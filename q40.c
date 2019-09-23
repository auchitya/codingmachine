ss#include<stdio.h>
main()
{
int i,j,m,n;
printf("Enter values of a,b");
scanf("%d%d",&m,&n);
printf("(%d)(%d)\n",m,n);
for(i=1;i<=8;i++)
   {
   printf("(%d)(%d)",m,n);
   for(j=1;j<=i;j++)
       {
       printf("(%d)",f(j,m,n));
       }   
   printf("\n");
   }
}
int f(int n,int m,int x)
{
	int i,s=1;
	for(i=0;i<n;i++)
            {
	    s=m+x;
            m=x;
            x=s;
            }
	return s;
}
