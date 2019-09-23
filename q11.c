#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,x1,x2,p,q;
printf("enter the numbers:");
scanf("%f%f%f",&a,&b,&c);
printf("\n quadratic equation: %0.0f(x^2) + %0.0fx + %0.0f",a,b,c);
d=((b*b)-(4*a*c));
printf("\n%f",d);
if(d>0)
{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("\nreal roots: %f  %f",x1,x2);
}
else if(d=0)
{
    x1=-b/(2*a);
    x2=-b/(2*a);
    printf("\nroots are: %f %f",x1,x2);
}
else if(d<0)
{
   x1=(-b)/(2*a);
   x2=(-b)/(2*a);
   p=(sqrt(-d))/(2*a);
   q=(-sqrt(-d))/(2*a);
   printf("complex roots are: %f + %fi",x1,p);
   printf("complex roots are: %f + %fi",x2,q);
}
}




