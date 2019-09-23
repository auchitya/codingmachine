#include<stdio.h>
void main()
{
    int i,x,k;
    printf("enter the number:");
    scanf("%d %d",&x,&k);
    for(i=0;i<k-1;i++)
    {
        x=x/10;
    }
    printf("%d",x%10);
}



