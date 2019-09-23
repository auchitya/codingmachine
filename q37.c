#include<stdio.h>
main()
{
	int i,j,k=8;
	for(i=4;i<=10;i++)
	{
		for(j=0;j<k;j++)
		printf("%d,",i*j);
		printf("\n");
		k--;
	}
}
