#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=4;x++)
{
for(y=0;y<=19;y++)
{
if((x%2==0)||(y%5==0))
printf("*");
else
printf("0");
}
printf("\n");
}
}
