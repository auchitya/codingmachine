#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,x,angle,angle1;
printf("enter sides of triangle\n");
scanf("%f\n%f\n%f",&a,&b,&c);
x=sqrt((b*b+c*c-a*a)/(2*b*c));
angle=acos(x);
angle1=angle*180*7/22;
printf("in radian is %f and in degree is %f",angle,angle1);
}
