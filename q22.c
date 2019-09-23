#include<stdio.h>
int main()
{
int x,y,z;
for(x=0;x<=5;x++)
{
for(y=1;y<=x+1;y++)
{
printf("%c",64+y);
}
for(z=1;z<=5-x;z++)
{
printf("%c",96+z);
}
printf("\n");
}
}
