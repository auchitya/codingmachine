#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,p,q,r,x,y;
printf("enter lines in the form ax+by+c=o\n");
scanf("%f\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&p,&q,&r);
if(a/p==b/q)
   printf("Lines are Parallel\n");
else
   {
   x=(r*b-q*c)/(q*a-p*b);
   y=(-c-a*x)/b;  
   printf("coordinates of intersection are (%f,%f)",x,y);
   }
}
