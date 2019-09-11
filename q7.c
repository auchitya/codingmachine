#include<stdio.h>
int main()
{
int a,sum;
printf("enter a no.\n");
scanf("%d",&a);
sum=(a%10)+((a%100)/10);
printf("%d\n",sum);
}
