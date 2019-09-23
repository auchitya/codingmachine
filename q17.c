#include<stdio.h>
main()
{
	int i,n,x;float s=0,r=1;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<n;i++)
	{
		scanf("%d",&x);
		s=s+x*r;
		r=x;	
	}
	printf("Output=%f",s);
}
