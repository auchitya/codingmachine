#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=4;x++)
{
for(y=5-x;y>=1;y--)
{
printf("%c",64+y);
}
printf("\n");
}
}
