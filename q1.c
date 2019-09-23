#include<stdio.h>
main()
{
	int i,n,x,s=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		s=s+x%10;
	}
	printf("Output=%d",s);
}
