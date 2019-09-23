#include<stdio.h>
int main()
{
float a,b,c,d,e,f,vector1,vector2,dot_product;
printf("enter the numbers:");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
printf("vector1: %0.0fi + %0.0fj + %0.0fk",a,b,c);
printf("\nvector2: %0.0fi + %0.0fj + %0.0fk",d,e,f);
dot_product=(a*d)+(b*e)+(c*f);
printf("\n%0.0f",dot_product);
}




