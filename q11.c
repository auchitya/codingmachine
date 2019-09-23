#include<stdio.h>
int main()
{
int a,b,c,x;
printf("enter 3 no a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && b>c)
{
printf("%d",b);
}
else if(a>c && b<c)
{
printf("%d",c);
}
else if(a<b && a>c)
{
printf("%d",a);
}
}
