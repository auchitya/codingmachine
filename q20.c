#include<stdio.h>
main()
{
	int i,n,x,k,s=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("Enter value of k:");
	scanf("%d",&k);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0){
		i++;
		if(k==i)break;
		}
	}
	for(;i<=n;i++)
	{
		scanf("%d",&x);
		s+=x;
	}
	}
}
