#include<stdio.h>
main()
{
	int i,n,x,s=0,c=0;int r=1;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(r%2==0&&x%2==0)break;
		if(x%2==0)
		r=x;
		else 
		r=x;
	}
	for(i=i+1;i<=n;i++)
	{
		scanf("%d",&x);
		s=s+x;
	}
	printf("Output=%d",s);
}
