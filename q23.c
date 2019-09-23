#include<stdio.h>
void main()
{
    int a,n,x,y;
    printf("enter the number:");
    scanf("%2d",&a);
    n=a;
    x=n/10;
    y=n-(10*x);
    printf("%d",y);
}


