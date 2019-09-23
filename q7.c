#include<stdio.h>
int main()
{
float a,b,c,d,e,f,i,j,k;
printf("enter the numbers:");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
printf("vector1: %0.0fi + %0.0fj + %0.0fk",a,b,c);
printf("\nvector2: %0.0fi + %0.0fj + %0.0fk",d,e,f);
i=(b*f)-(e*c);
j=(c*d)-(a*f);
k=(a*e)-(d*b);
printf("\n the vector product is: %fi + %fj + %fk",i,j,k);
}




