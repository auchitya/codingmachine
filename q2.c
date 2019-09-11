#include<stdio.h>
#include<math.h>
int main()
{
int a ,b,c,d,e;
printf("Enter two no.\n");
scanf("%d%d",&a,&b);
d=pow(b,3);
c=pow(a,2);
e=c+d;
printf("The sum is %d^2+%d^3 =%d\n",a,b,e);
}
