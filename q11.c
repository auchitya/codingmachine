#include<stdio.h>
int main()
{
int x ;
for(x=1;x>0;x++)
{
if(((x%10)+((x%100)/10))%7==0)
printf("%d ",x);
}
}
