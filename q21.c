#include<stdio.h>
int main()
{
int x,y,z;
for(x=0;x<=6;x++)
{
for(y=5-x;y<5;y++)
{
printf(" ");
}
for(z=1+x;z<=6;z++)
{
printf("%c",64+z);
}
printf("\n");
}
}
