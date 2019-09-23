#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
printf("enter a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
printf("centre (%f,%f) and radius is %f",(-a/2),(-b/2),sqrt(((a*a)/4)+((b*b)/4)-c));
}

