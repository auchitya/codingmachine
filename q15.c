#include<stdio.h>
main()
{
	int i,n,x;float s=0,k=0;
	printf("Enter value of N:");
	scanf("%d",&n);
	printf("\nEnter Values:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0){
		s=x*i;
		k++;	
		}	
	}
	printf("Output=%f",s/k);
}
