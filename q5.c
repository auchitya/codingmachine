#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,dis;
printf("enter the value of a,b,c,d,e\n");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
dis=((a*c)+(b*d)+e)/(sqrt(pow(c,2)+pow(d,2)));
printf("%f",dis);
}
