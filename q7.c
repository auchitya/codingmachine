#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d;
printf("enter three no a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>0)
printf("the first root is %f and the second root is %f ",((-b+(sqrt(d)))/(2*a)),((-b-(sqrt(d)))/(2*a)));
else if(d==0)
printf("equal roots are %f",(-b/(2*a)));
else if(d<0)
printf("the first root is %f+%fi and the second root is %f-%fi ",(-b/(2*a)),((sqrt(-d))/(2*a)),(-b/(2*a)),((sqrt(-d))/(2*a)));
}

