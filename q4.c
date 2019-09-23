#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the sides of triangle a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if ((a*a)==((b*b)+(c*c)))
printf("A in 90");
else
printf("not");
}
