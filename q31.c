#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=fn(i);j++)
		printf("A");
		printf("\n");
	}
}
int fn(int n)
{
	int i,s=1;
	for(i=1;i<n;i++)
	s=s+i;
	return s;
}
