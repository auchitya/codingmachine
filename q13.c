#include<stdio.h>
main()
{
	int i,n,x,s=0;float k=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==1){
		s=s+x;k++;
	}
	}
	printf("Output=%f",s/k);
}
