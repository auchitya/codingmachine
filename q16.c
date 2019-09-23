#include<stdio.h>
int main()
{
int x ;
for(x=10;x<100;x++)
{
if(((x/10)%3!=0)&&(x%2==0))
printf("%d ",x);
}
}
