#include<stdio.h>
int main()
{
int x,y;
for(x=1;x<=5;x++)
{
for(y=1;y<=20;y++)
{
if((x%2==0)&&(y%2==0))
printf("0");
else
printf("*");
}
printf("\n");
}
}
