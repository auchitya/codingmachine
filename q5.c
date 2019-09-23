#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=4;x++)
{
for(y=1;y<=(5-x);y++)
{
printf("%c",70-y+x);
}
printf("\n");
}
}
