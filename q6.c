#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,u;
printf("enter the numbers:");
scanf("%f%f%f",&a,&b,&c);
printf("vector1: %0.0fi + %0.0fj + %0.0fk",a,b,c);
u=sqrt((a*a)+(b*b)+(c*c));
printf("\n%f",u);
d=a/u;
e=b/u;
f=c/u;
printf("\n unitvector: %0.4fi + %0.4fj + %0.4fk",d,e,f);
}





