#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=5;x++)
{
for(y=0;y<=29;y++)
{
if((x%2!=0)&&((y%3==0)||(y%5==0)))
printf("*");
else
printf("0");
}
printf("\n");
}
}
