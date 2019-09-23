#include<stdio.h>
int main()
{
int x ;
for(x=1;x<100;x++)
{
if((x/10)%3==1)
printf("%d ",x);
}
}
