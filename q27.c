#include<stdio.h>
void main()
{
    int a;
    printf("enter the numbers:");
    scanf("%d",&a);
    while(a>0)
    {
        if(((a%10)%2)==0)
         {
          printf("answer is:%d",a%10);
          return 0;
         }
        a=a/10;
    }
}



