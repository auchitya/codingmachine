#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,i,n,x,sum=0,sum2=0;
    printf("enter the number n:");
    scanf("%d",&n);
    printf("\n enter the %d numbers:",n);
    for(i=0;i<n;i++)
    {
     scanf("%d%d",&a,&b);
     sum=sum+a;
     sum2=(sum2)+b;
    }
    printf("sum is equal to: %d + %di",sum,sum2);
}



