#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,area;
printf("enter the coordinates of triangle");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
area=fabs((0.5)*(f*(c-a))+(d*(a-e))+(b*(e-c)));
printf("%f",area);
}

