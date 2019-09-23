#include<stdio.h>
int main()
{
int x ;
for(x=1;x>0;x++)
{
if(((x%3==0)||(x%5==0))&&(x%15!=0))
printf("%d ",x);
}
}
