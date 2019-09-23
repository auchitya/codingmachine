#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,dis;
printf("enter cordinates of 2 points\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
dis=sqrt(pow((a-c),2)+pow((b-d),2));
printf("%f",dis);
}
