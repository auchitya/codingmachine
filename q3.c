#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=3;x++)
{
for(y=0;y<=9;y++)
{
if((x+y)%2==0)
printf("0");
else
printf("*");
}
printf("\n");
}
}
