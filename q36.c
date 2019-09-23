#include<stdio.h>
main()
{
int i,j;
for(i=0;i<7;i++)
   {
   for(j=0;j<=30;j++)
       {
       if(j%(i+4)==0)
          printf("%d,",j);
       }
   printf("\n");
   }
}
