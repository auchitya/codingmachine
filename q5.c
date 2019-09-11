#include<stdio.h>
int main()
{
int a;
printf("enter a no. whose last digit is to be removed\n");
scanf("%d",&a);
a=a/100;
printf("%d\n",a);
}
