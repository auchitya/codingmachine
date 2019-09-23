#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=5;x++)
{
for(y=1;y<=x+1;y++)
{
printf("%c",64+y);
}
printf("\n");
}
}
