#include<stdio.h>
int main()
{
int a,sum;
printf("enter a no.\n");
scanf("%d",&a);
a=((a/10)*10)+((a%10)*2);
printf("%d\n",a);
}
