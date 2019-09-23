#include<stdio.h>
int main()
{
float a,b,c,m;
printf("enter the values of a,b,c for ax + by + c=0\n");
scanf("%f%f%f",&a,&b,&c);
m=-a/b;
printf("the slope of line is %f\n",m);
b==0?(printf("the line is vertical ")):(printf("the line is not vertical"));
}
 
