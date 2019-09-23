#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter three no a,b,c,d\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a>b)&&(a>c)&&(a>d))
printf("%d",a);
else if((b>c)&&(b>a)&&(b>d))
printf("%d",b);
else if((c>a)&&(c>b)&&(c>d))
printf("%d",c);
else if((d>a)&&(d>b)&&(d>c))
printf("%d",d);
}
