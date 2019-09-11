#include<stdio.h>
int main()
{
int a;
printf("enter a no.\n");
scanf("%d",&a);
a=((a/100)*10)+(a%10);
printf("%d\n",a);
}
