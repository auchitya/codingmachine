#include<stdio.h>
main()
{
int i,j;
char c='A';
for(i=1;i<=5;i++)
   {
   for(j=1;j<=f(i);j++)
       {
       printf("%c",c);
       c++;
       }   
   printf("\n");
   c=c-f(i)+1;
   }
}
int f(int n)
{
	int i,s=1;
	for(i=1;i<n;i++)
	s=s+i;
	return s;
}
