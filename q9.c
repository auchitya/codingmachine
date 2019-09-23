#include<stdio.h>
int main()
{
float a,b,c,d,complex1,complex2,e,f;
printf("enter the numbers:");
scanf("%f%f%f%f",&a,&b,&c,&d);
printf("complex1: %0.4f + %0.5fi",a,b);
printf("\ncomplex2: %0.6f + %0.6fi",c,d);
e=((a*c)+(b*d))/((c*c)+(d*d));
f=((b*c)-(a*d))/((c*c)+(d*d));
printf("\n%f \t%f",e,f);
printf("\ndivision of complex numbers is: %f + %fi",e,f);
}






