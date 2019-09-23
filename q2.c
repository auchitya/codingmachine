#include<stdio.h>
int main()
{
int x,y;
for(x=0;x<=9;x++)
{
for(y=0;y<=19;y++)
{
if(((x<=2)&&(y<=7))||((x>=7)&&(y>=15)))
printf("0");
else
printf("*");
}
printf("\n");
}
}
