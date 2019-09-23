#include<stdio.h>
int main()
{
int a,b,c;
float d;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
printf("line: %dx + %dy + %d",a,b,c);
d=-c/a;
printf("\n point of intersection: (%0.2f,0)",d);
}




