#include<stdio.h>
int main()
{
int a,b,c,d,x,i=0;
printf("enter 5 no a,b,c,d,x\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
if(x==a)
i++;
if(x==b)
i++;
if(x==c)
i++;
if(x==d)
i++;
printf("%d",i);
}
