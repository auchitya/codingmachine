#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,i,n,x,sum=0;
    printf("enter the number n:");
    scanf("%d",&n);
    printf("\n enter the %d numbers:",2*n);
    for(i=0;i<n;i++)
    {
     scanf("%d%d",&a,&b);
     x=pow(a,b);
     sum=sum+x;
    }
    printf("sum is equal to: %d",sum);
}




