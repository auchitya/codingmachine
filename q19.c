#include<stdio.h>
int main()
{
int x,y;
for(x=1;x<=6;x++)
{
for(y=1;y<=7-x;y++)
{
printf("%c",64+y);
}
printf("\n");
}
}
