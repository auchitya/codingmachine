#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=3;x++)
{
for(y=1;y<=4-x;y++)
{
printf("%c",65+x);
}
}
}
