#include<stdio.h>
int main()
{
int x ;
for(x=1;x<70;x++)
{
if((x%10)%3==0)
printf("%d ",x);
}
}
