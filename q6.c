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
		x=(x/100)*100+(x%10)*10+(x/10)%10;
		s=s+x;
	}
	printf("Output=%d",s);
}
