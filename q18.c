#include<stdio.h>
#include<math.h>
void main()
{
    int a,x=0,n,sum=0,i;
    printf("enter the number n:");
    scanf("%d",&n);
    printf("enter the %d numbers: ",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        x=x+pow(a,2);
        printf("\n%d",x);
        sum=sum+sqrt(x);
    }

    printf("%d",sum);
}

